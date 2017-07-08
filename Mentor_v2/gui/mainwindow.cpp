#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include "dlgabout.h"
#include "../utils/utils.h"
#include "../tasks/tasktree.h"
#include "../tasks/view/taskviewer.h"
#include "../quiz/quizgroup.h"
#include "../quiz/quiz.h"
#include "../tasks/taskgroup.h"
#include <QDebug>
#include <QBoxLayout>
#include "../task2quiz/task2quiz.h"
#include "../quiz/render/script/scriptrenderer.h"
#include "../tasks/view/views/quizadapter.h"
#include "../quiz/view/views/quiznodeview.h"
#include "dlgvariants.h"
#include "../quiz/render/web/webrenderer.h"
#include <QFileDialog>
#include <QPrintDialog>
#include "../quiz/render/script/print/printscriptrenderer.h"
#include <QImage>
#include "../utils/txttobmp.h"
#include <QPainter>
#include <QPrinter>
#include <QPrintDialog>
#include <../quiz/file/xmlquizfile.h>
#include <QSettings>
#include "../gui/dlgaddquestions.h"
#include "../quiz/quizgroup.h"
#include "../quiz/filter/group/random_quizgroupfilter.h"

QSettings *settings;

class CustomQuizAdapter : public QuizAdapter
{
public:
	CustomQuizAdapter (QuizView *view) : _qv(view) {}
    void addTasks (const QList<TaskNode *> &list) {
        QList<QuizNode *> quizlist = TaskToQuiz::instance()->getList(list);
        if (quizlist.count()==1)
        {
            _qv->nodeView()->addItems(quizlist);
            return;
        }
        dlgAddQuestions dlg;
        if (dlg.exec() == QDialog::Accepted)
        {
            if (dlg.isCreateGroup())
            {
                QuizGroup *group = new QuizGroup();
                group->setTitle(dlg.groupName());
                if (dlg.useRandomFilter())
                    group->addFilter(new RandomQuizGroupFilter());
                for(int i=0; i<quizlist.count(); ++i)
                    group->addChild(quizlist[i]);
                _qv->nodeView()->addItems(QList<QuizNode *>() << group);
            }
            else
                _qv->nodeView()->addItems(quizlist);
        }
        else
        {
            // free quiznodes allocated by Task2Quiz
            for(int i=0; i<quizlist.count(); ++i)
                delete quizlist[i];
        }
	}
private:
	QuizView *_qv;
};

TaskTree *tree;
Quiz *quiz;
CustomQuizAdapter *adapter;

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
    currentFilename = "";
    settings = new QSettings(QApplication::applicationDirPath()+"/mentor2.ini", QSettings::IniFormat);

	ui->setupUi(this);
    this->restoreState(qvariant_cast<QByteArray>(settings->value("MainWindowState", this->saveState())));
    this->restoreGeometry(qvariant_cast<QByteArray>(settings->value("MainWindowGeometry", this->saveGeometry())));

    qDebug() << "New quiz preparing...";
    quiz = new Quiz();
    qDebug() << "New quiz created.";

	setCentralWidget(ui->fraCentral);
	statusBar()->addPermanentWidget(new QLabel("Ready to work."), 1);
    tree = Utils::loadTaskTreeFromXML(":/base/base.xml");
	taskView = NULL;
	quizView = NULL;
    qDebug() << "Tasks loaded.";

	QBoxLayout *layT = new QBoxLayout(QBoxLayout::LeftToRight, ui->fraTask);
	layT->setContentsMargins(0,0,0,0);
	ui->fraTask->setLayout(layT);

	QBoxLayout *layQ = new QBoxLayout(QBoxLayout::LeftToRight, ui->fraQuiz);
	layQ->setContentsMargins(0,0,0,0);
	ui->fraQuiz->setLayout(layQ);

    qDebug() << "QuizView is preparing...";
    ui->fraQuiz->layout()->addWidget(quizView = new QuizView(quiz, this));
	adapter = new CustomQuizAdapter(quizView);
    qDebug() << "QuizView created.";

	setTaskView(TaskViewer::instance()->get(
			(TaskGroup *)tree->root()
		)
	);


	/*setQuizView(QuizViewer::instance()->get(
			quiz->structure()
		)
	);*/
}




//==========================================================================

/*
void MainWindow::setQuizView (QuizNodeView *view)
{
	if (quizView)
		quizView->deleteLater();
	quizView = view;
	ui->fraQuiz->layout()->addWidget(quizView);
	connect(quizView, SIGNAL(enterNode(QuizNode *)), this, SLOT(displayQuizNode(QuizNode *)));
}

void MainWindow::displayQuizNode(QuizNode *n)
{
	if (QuizViewer::instance()->get(n))
		setQuizView(QuizViewer::instance()->get(n));
}
*/





//==========================================================================

void MainWindow::setTaskView (TaskView *view)
{
	taskView->deleteLater();
	taskView = view;
	ui->fraTask->layout()->addWidget(taskView);
	taskView->setQuizAdapter(adapter);
	connect(taskView, SIGNAL(enterNode(TaskNode *)), this, SLOT(displayTaskNode(TaskNode *)));
}

void MainWindow::displayTaskNode(TaskNode *n)
{
	//!
	if (TaskViewer::instance()->get(n))
		setTaskView(TaskViewer::instance()->get(n));
}





//==========================================================================

MainWindow::~MainWindow()
{
    settings->setValue("MainWindowState", this->saveState());
    settings->setValue("MainWindowGeometry", this->saveGeometry());
    delete settings;
    delete ui;
}

void MainWindow::on_actHelpAbout_triggered()
{
    dlgAbout().exec();
}

void MainWindow::on_actExit_triggered()
{
    close();
}

/*void MainWindow::on_actLevelUp()
{
	if (this->taskView->node()->parent())
		displayTaskNode(this->taskView->node()->parent());
}*/

void MainWindow::on_actGenerate_triggered()
{
    (new dlgVariants(quiz, this))->show();
}

void MainWindow::on_actTaskRoot_triggered()
{
	displayTaskNode(tree->root());
}

void MainWindow::on_actGenerateForWeb_triggered()
{
    (new dlgVariants(quiz, this))->show();
}


void MainWindow::on_actPrint_triggered()
{
    (new dlgVariants(quiz, this))->show();
}

void MainWindow::on_actNew_triggered()
{
	ui->fraQuiz->layout()->removeWidget(quizView);
    quizView->deleteLater();

    delete quiz;
	quiz = new Quiz();

	quizView = new QuizView(quiz, this);
    ui->fraQuiz->layout()->addWidget(quizView);
    adapter = new CustomQuizAdapter(quizView);
    taskView->setQuizAdapter(adapter);

    currentFilename = QString();
}

void MainWindow::on_actOpen_triggered()
{
    QString filename = QFileDialog::getOpenFileName(
            this,
            tr("Открыть"),
            QString(),
            tr("Контрольная в XML-формате (*.mtrx);;Все файлы (*.*)")
    );

    if (!filename.isEmpty())
    {
        ui->fraQuiz->layout()->removeWidget(quizView);
        quizView->deleteLater();
        qDebug() << "widget removed";

        delete quiz;
        quiz = XMLQuizFile::instance()->load(filename);

        quizView = new QuizView(quiz, this);
        ui->fraQuiz->layout()->addWidget(quizView);
        adapter = new CustomQuizAdapter(quizView);
        taskView->setQuizAdapter(adapter);

        currentFilename = filename;
    }
}

void MainWindow::on_actSave_triggered()
{
    if (currentFilename.isEmpty())
        on_actSaveAs_triggered();
    else
        XMLQuizFile::instance()->save(currentFilename, quiz);
}

void MainWindow::on_actSaveAs_triggered()
{
    if (!(currentFilename = QFileDialog::getSaveFileName(
            this,
            tr("Сохранить как"),
            QString(),
            tr("Контрольная в XML-формате (*.mtrx);;Все файлы (*.*)")
    )).isEmpty())
        on_actSave_triggered();
}
