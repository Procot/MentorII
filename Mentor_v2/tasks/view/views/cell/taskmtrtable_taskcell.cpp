#include "taskmtrtable_taskcell.h"
#include "ui_taskmtrtable_taskcell.h"
#include "../../../taskmtrtable.h"

TaskMTRTableCell::TaskMTRTableCell(TaskNode *node, QWidget *parent)
	: TaskCell(node, parent)
	, ui(new Ui::TaskMTRTableCell)
{
	ui->setupUi(this);
	TaskMTRTable *g = (TaskMTRTable *)node;
	ui->lblTitle->setText(g->title());
	ui->lblDescription->setText(g->description());
    if (!g->image().isNull())
        ui->lblImage->setPixmap(QPixmap::fromImage(g->image()));
}

TaskMTRTableCell::~TaskMTRTableCell()
{
	delete ui;
}
