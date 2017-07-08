#ifndef DLGTESTGENPROGRESS_H
#define DLGTESTGENPROGRESS_H

#include <QDialog>
#include <QMutex>
#include <QThread>
#include "../quiz/quiz.h"
#include "../quiz/render/web/webrenderer.h"

namespace Ui {
class dlgTestGenProgress;
}

/////////////////////////////////////////////////////////////////

class ProgressWebCallback : public WebCallback
{
    QMutex *mutex;
    int *prog;
    int *totalQuestions;
    bool cancelled;
public:
    ProgressWebCallback (QMutex *mtx, int *prg, int *tq);
    void started (int totalQuestions);
    void progress (int done, int totalQuestions);
    void cancel();
    bool isCancelled();
};

/////////////////////////////////////////////////////////////////

class GenerationThread : public QThread
{
    WebCallback *cbk;
    QString path;
    Quiz *q;
public:
    GenerationThread(Quiz *quiz, const QString &pth, WebCallback *callback);
    virtual void run();
};

/////////////////////////////////////////////////////////////////


class dlgTestGenProgress : public QDialog
{
    Q_OBJECT
    
public:
    explicit dlgTestGenProgress(Quiz *quiz, const QString &path, QWidget *parent = 0);
    ~dlgTestGenProgress();
    
protected:
    void timerEvent (QTimerEvent *);

private slots:
    void on_btnCancel_clicked();

private:
    GenerationThread *t;
    ProgressWebCallback *callback;
    int progress, total;
    QMutex mutex;
    Ui::dlgTestGenProgress *ui;
};

#endif // DLGTESTGENPROGRESS_H
