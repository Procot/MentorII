#include "taskgroup_taskview.h"
#include "ui_taskgroup_taskview.h"
#include "../../taskgroup.h"
#include "../../taskquestion.h"
#include "../../taskmtrtable.h"
#include "cell/taskgroup_taskcell.h"
#include "cell/taskquestion_taskcell.h"
#include "cell/taskmtrtable_taskcell.h"
#include "../../../tasks/tasktree.h"
#include <QDebug>

QList<TaskNode *> TaskGroupView::selected()
{
	QList<QTableWidgetItem *> sel = this->ui->tableWidget->selectedItems();
	QList<TaskNode *> list;
	for(int i=0; i<sel.count(); ++i)
		list << ((TaskCell *)ui->tableWidget->cellWidget(sel[i]->row(), sel[i]->column()))->node();
	return list;
}

TaskGroupView::TaskGroupView(TaskNode *node, QWidget *parent) :
	TaskView(node, parent),
	ui(new Ui::TaskGroupView)
{
	ui->setupUi(this);
	fillView();
	startTimer(300);
}

void TaskGroupView::timerEvent (QTimerEvent *)
{
    //ui->tbtAbout->setEnabled(ui->tableWidget->selectedItems().count() > 0);
	ui->tbtAddSelected->setEnabled(ui->tableWidget->selectedItems().count() > 0);
    //ui->tbtHelp->setEnabled(ui->tableWidget->selectedItems().count() > 0);
    //ui->tbtTry->setEnabled(ui->tableWidget->selectedItems().count() > 0);
	ui->tbtUpLevel->setEnabled(node()->parent() != NULL);
}

void TaskGroupView::fillView()
{
	TaskGroup *g = (TaskGroup *)node();
	ui->tableWidget->setColumnCount(1);
	ui->tableWidget->setRowCount(g->children().count());
	for(int i=0; i<g->children().count(); ++i)
	{
		QWidget *widget = cell(g->children()[i]);
		widget->adjustSize();
		if (widget->width()>ui->tableWidget->columnWidth(0))
			ui->tableWidget->setColumnWidth(0, widget->width());
		ui->tableWidget->setRowHeight(i, widget->height());
		ui->tableWidget->setItem(i,0, new QTableWidgetItem());
		ui->tableWidget->setCellWidget(i, 0, widget);
	}
}

TaskCell *TaskGroupView::cell (TaskNode *node)
{
	if (node->nodeType()==TaskGroup().nodeType())
		return new TaskGroupCell(node);
	else if (node->nodeType()==TaskQuestion().nodeType())
		return new TaskQuestionCell(node);
	else if (node->nodeType()==TaskMTRTable().nodeType())
		return new TaskMTRTableCell(node);
	return NULL;
}

TaskGroupView::~TaskGroupView()
{
	delete ui;
}

void TaskGroupView::on_tableWidget_cellDoubleClicked(int row, int column)
{
	TaskCell *cv = (TaskCell *)(ui->tableWidget->cellWidget(row, column));
	emit enterNode(cv->node());
}

void TaskGroupView::on_tbtUpLevel_clicked()
{
	if (node()->parent())
		emit enterNode(node()->parent());
}

void TaskGroupView::on_tbtAddSelected_clicked()
{
	quizAdapter()->addTasks(selected());
}
