#include "taskmtrtable_taskview.h"
#include "ui_taskmtrtable_taskview.h"
#include "../../taskgroup.h"
#include "../../taskquestion.h"
#include "../../taskmtrtable.h"
#include "cell/taskgroup_taskcell.h"
#include "cell/taskquestion_taskcell.h"
#include "cell/taskmtrtable_taskcell.h"
#include "../../../task2quiz/task2quiz.h"

QList<TaskNode *> TaskMTRTableView::selected()
{
	QList<QTableWidgetItem *> sel = this->ui->tableWidget->selectedItems();
	QList<TaskNode *> list;
	for(int i=0; i<sel.count(); ++i)
		list << ((TaskCell *)ui->tableWidget->cellWidget(sel[i]->row(), sel[i]->column()))->node();
	return list;
}

TaskMTRTableView::TaskMTRTableView(TaskNode *node, QWidget *parent)
	: TaskView(node, parent)
	, ui(new Ui::TaskMTRTableView)
{
	ui->setupUi(this);
	fillView();
	startTimer(300);
}

void TaskMTRTableView::timerEvent (QTimerEvent *)
{
    //ui->tbtAbout->setEnabled(ui->tableWidget->selectedItems().count() > 0);
	ui->tbtAddSelected->setEnabled(ui->tableWidget->selectedItems().count() > 0);
    //ui->tbtHelp->setEnabled(ui->tableWidget->selectedItems().count() > 0);
    //ui->tbtTry->setEnabled(ui->tableWidget->selectedItems().count() > 0);
	ui->tbtUpLevel->setEnabled(node()->parent() != NULL);
}

TaskMTRTableView::~TaskMTRTableView()
{
	delete ui;
}

void TaskMTRTableView::fillView()
{
	TaskMTRTable *g = (TaskMTRTable *)node();
	ui->tableWidget->setColumnCount(g->columns().count());
	int rowcount = 0;
	for(int i=0; i<g->columns().count(); ++i)
		if (g->columns().at(i).count()>rowcount)
			rowcount = g->columns().at(i).count();
	ui->tableWidget->setRowCount(rowcount);
	ui->tableWidget->setHorizontalHeaderLabels(g->columnTitles());
	for(int i=0; i<g->columns().count(); ++i)
	{
		for(int j=0; j<g->columns().at(i).count(); ++j)
		{
			QWidget *widget = cell(g->columns().at(i)[j]);
			widget->adjustSize();
			if (widget->width() > ui->tableWidget->columnWidth(i))
				ui->tableWidget->setColumnWidth(i, widget->width());
			if (widget->height() > ui->tableWidget->rowHeight(j))
				ui->tableWidget->setRowHeight(j, widget->height());
			ui->tableWidget->setItem(j,i, new QTableWidgetItem());
			ui->tableWidget->setCellWidget(j, i, widget);
		}
		for(int j=g->columns().at(i).count(); j<ui->tableWidget->rowCount(); ++j)
		{
			QTableWidgetItem *item = new QTableWidgetItem();
			item->setFlags(0);
			ui->tableWidget->setItem(j, i, item);
		}
	}
}

TaskCell *TaskMTRTableView::cell (TaskNode *node)
{
	if (node->nodeType()==TaskGroup().nodeType())
		return new TaskGroupCell(node);
	else if (node->nodeType()==TaskQuestion().nodeType())
		return new TaskQuestionCell(node);
	else if (node->nodeType()==TaskMTRTable().nodeType())
		return new TaskMTRTableCell(node);
	return NULL;
}

void TaskMTRTableView::on_tableWidget_cellDoubleClicked(int row, int column)
{
	TaskCell *cv = (TaskCell *)(ui->tableWidget->cellWidget(row, column));
	emit enterNode(cv->node());
}


void TaskMTRTableView::on_tbtUpLevel_clicked()
{
	if (node()->parent()) emit enterNode(node()->parent());
}

void TaskMTRTableView::on_tbtAddSelected_clicked()
{
	quizAdapter()->addTasks(selected());
}
