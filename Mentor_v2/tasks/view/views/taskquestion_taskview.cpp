#include "taskquestion_taskview.h"
#include "ui_taskquestion_taskview.h"
#include <QDebug>

QList<TaskNode *> TaskQuestionView::selected()
{
	return QList<TaskNode *>() << this->node();
}

TaskQuestionView::TaskQuestionView(TaskNode *node, QWidget *parent) :
	TaskView(node, parent),
	ui(new Ui::TaskQuestionView)
{
	ui->setupUi(this);
}

TaskQuestionView::~TaskQuestionView()
{
	delete ui;
}

void TaskQuestionView::on_pushButton_clicked()
{
	emit enterNode(node()->parent());
}

