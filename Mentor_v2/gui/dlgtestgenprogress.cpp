#include "dlgtestgenprogress.h"
#include "ui_dlgtestgenprogress.h"
#include "../quiz/render/web/webrenderer.h"
#include "../quiz/quiz.h"
#include <QDebug>


//////////////////////////////////////////////////////////////////////////////

ProgressWebCallback::ProgressWebCallback (QMutex *mtx, int *prg, int *tq)
    : mutex(mtx)
    , prog(prg)
    , totalQuestions(tq)
    , cancelled(false)
{
}

void ProgressWebCallback::started (int totalQuestions)
{
    mutex->lock();
    *this->totalQuestions = totalQuestions;
    mutex->unlock();
}

void ProgressWebCallback::progress (int done, int totalQuestions)
{
    mutex->lock();
    *prog = done;
    mutex->unlock();
}

void ProgressWebCallback::cancel()
{
    mutex->lock();
    cancelled = true;
    mutex->unlock();
}

bool ProgressWebCallback::isCancelled()
{
    bool res;
    mutex->lock();
    res = cancelled;
    mutex->unlock();
    return res;
}

//////////////////////////////////////////////////////////////////////////////


GenerationThread::GenerationThread (Quiz *quiz, const QString &pth, WebCallback *callback)
    : cbk(callback)
    , path(pth)
    , q(quiz)
{
}

void GenerationThread::run()
{
    WebRenderer::instance()->render(q, path, cbk);
}

///////////////////////////////////////////////////////////////////////////////


dlgTestGenProgress::dlgTestGenProgress(Quiz *quiz, const QString &path, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dlgTestGenProgress)
{
    progress = 0;
    ui->setupUi(this);
    t = new GenerationThread(quiz, path, callback = new ProgressWebCallback(&this->mutex, &this->progress, &this->total));
    t->start();
    startTimer(300);
    ui->prbProgress->setValue(0);
}

void dlgTestGenProgress::timerEvent (QTimerEvent *)
{
    mutex.lock();

    if (ui->prbProgress->maximum() != total)
        ui->prbProgress->setMaximum(total);

    if (t->isFinished())
        this->accept();
    ui->prbProgress->setValue(progress);

    mutex.unlock();
}

dlgTestGenProgress::~dlgTestGenProgress()
{
    delete t;
    delete callback;
    delete ui;
}

void dlgTestGenProgress::on_btnCancel_clicked()
{
    callback->cancel();
}
