#include "taskquestion_taskcell.h"
#include "ui_taskquestion_taskcell.h"
#include "../../../taskquestion.h"

TaskQuestionCell::TaskQuestionCell(TaskNode *node, QWidget *parent) :
	TaskCell(node, parent),
	ui(new Ui::TaskQuestionCell)
{
	ui->setupUi(this);
	TaskQuestion *q = (TaskQuestion *)node;
	ui->label->setPixmap(QPixmap::fromImage(q->image()));
}

TaskQuestionCell::~TaskQuestionCell()
{
	delete ui;
}
