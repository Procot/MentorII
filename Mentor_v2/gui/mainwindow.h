#pragma once

#include <QMainWindow>
#include "../tasks/view/views/taskview.h"
#include "../quiz/view/quizview.h"
namespace Ui { class MainWindow; }
class MainWindow : public QMainWindow
{
	Q_OBJECT
public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

private:
	QuizView *quizView;
	TaskView *taskView;
	void setTaskView (TaskView *view);
private:
	Ui::MainWindow *ui;
    QString currentFilename;
private slots:
	void on_actSave_triggered();
    void on_actOpen_triggered();
    void on_actNew_triggered();

    void on_actPrint_triggered();
    void on_actGenerateForWeb_triggered();
    void on_actGenerate_triggered();

    void on_actTaskRoot_triggered();
    //void on_actLevelUp();

    void displayTaskNode (TaskNode *);

	void on_actExit_triggered();
	void on_actHelpAbout_triggered();
    void on_actSaveAs_triggered();
};

