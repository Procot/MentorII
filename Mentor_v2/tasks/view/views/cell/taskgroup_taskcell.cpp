#include "taskgroup_taskcell.h"
#include "ui_taskgroup_taskcell.h"
#include "../../../taskgroup.h"

TaskGroupCell::TaskGroupCell (TaskNode *node, QWidget *parent) :
	TaskCell(node, parent),
	ui(new Ui::TaskGroupCell)
{
	ui->setupUi(this);
	TaskGroup *g = (TaskGroup *)node;
	ui->lblTitle->setText(g->title());
	ui->lblDescription->setText(g->description());
    if (!g->image().isNull())
        ui->lblImage->setPixmap(QPixmap::fromImage(g->image()));
}

TaskGroupCell::~TaskGroupCell()
{
	delete ui;
}
