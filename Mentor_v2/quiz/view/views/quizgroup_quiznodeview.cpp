#include "quizgroup_quiznodeview.h"
#include "ui_quizgroup_quiznodeview.h"
#include "../../quizgroup.h"
#include "../../quizquestion.h"
#include "cell/quizcell.h"
#include "cell/quizgroup_quizcell.h"
#include "cell/quizquestion_quizcell.h"
#include "../../filter/group/random_quizgroupfilter.h"
#include "../../filter/group/shuffle_quizgroupfilter.h"
#include "../gui/dlgnewgroup.h"
#include <QDebug>

void QuizGroupView::addItems (const QList<QuizNode *> &items)
{
	QuizGroup *group = (QuizGroup *)node();
	for(int i=0; i<items.count(); ++i)
		group->addChild(items.at(i));
	fillView();
}

void QuizGroupView::removeSelected()
{
}

QList<QuizNode *> QuizGroupView::selected()
{
	//!!!
	return QList<QuizNode *>();
}

QuizGroupView::QuizGroupView(QuizNode *item, QWidget *parent) :
	QuizNodeView(item, parent),
	ui(new Ui::QuizGroupView)
{
    qDebug() << "view is called";
    ui->setupUi(this);
    qDebug() << "view is filling...";
    fillView();
    qDebug() << "view filled";
    this->startTimer(200);
}

void QuizGroupView::timerEvent (QTimerEvent *)
{
	ui->tbtMoveUp->setEnabled(ui->table->rowCount()>0 && !ui->table->item(0, 0)->isSelected() && ui->table->selectedItems().count()>0);
	ui->tbtMoveDown->setEnabled(ui->table->rowCount()>0 && !ui->table->item(ui->table->rowCount()-1, 0)->isSelected() && ui->table->selectedItems().count()>0);
	ui->tbtUpLevel->setEnabled(node()->parent()!=NULL);
    if (ui->table->selectedItems().count()>0)
    {
        QTableWidgetItem *item = ui->table->selectedItems()[0];
        QuizCell *cell = (QuizCell *)(ui->table->cellWidget(item->row(), item->column()));
        QuizNode *node = cell->node();
        ui->tbtProperties->setEnabled(node->hasProperties());
    }
	ui->tbtRemove->setEnabled(ui->table->selectedItems().count()>0);
}

void QuizGroupView::fillView()
{
	QuizGroup *g = (QuizGroup *)node();
	ui->table->setColumnCount(1);
	ui->table->setRowCount(g->children().count());
	for(int i=0; i<g->children().count(); ++i)
	{
		QWidget *widget = cell(g->children()[i]);
		widget->adjustSize();
		if (widget->width()>ui->table->columnWidth(0))
			ui->table->setColumnWidth(0, widget->width());
		ui->table->setRowHeight(i, widget->height());
		ui->table->setItem(i,0, new QTableWidgetItem());
		ui->table->setCellWidget(i, 0, widget);
	}
}

QuizCell *QuizGroupView::cell (QuizNode *item)
{
	if (item->itemType()==QuizGroup().itemType())
		return new QuizGroupCell(item);
	else if (item->itemType()==QuizQuestion().itemType())
		return new QuizQuestionCell(item);
	return NULL;
}

QuizGroupView::~QuizGroupView()
{
	delete ui;
}


void QuizGroupView::on_table_cellDoubleClicked(int row, int column)
{
	QuizCell *cv = (QuizCell *)(ui->table->cellWidget(row, column));
	emit enterNode(cv->node());
}

void QuizGroupView::on_tbtUpLevel_clicked()
{
	if (node()->parent())
		emit enterNode(node()->parent());
}

void QuizGroupView::on_tbtAddRandom_clicked()
{
	dlgNewGroup dlg(true, false);
	if (dlg.exec()==QDialog::Accepted)
		((QuizGroup *)node())->addChild(dlg.makeGroup()), fillView();
}

void QuizGroupView::on_tbtRemove_clicked()
{
	QList<QTableWidgetItem *> items = ui->table->selectedItems();
	if (items.count() > 0)
	{
		QList<int> rows;
		for(int i=0; i<items.count(); ++i)
			rows << items[i]->row();
		qSort(rows);
		QuizGroup *group = (QuizGroup *)node();
		for(int i=rows.count()-1; i>=0; --i)
			group->removeChildAt(rows.at(i));
		ui->table->clearSelection();
		fillView();
	}
}


void QuizGroupView::on_tbtMoveUp_clicked()
{
	QList<QTableWidgetItem *> items = ui->table->selectedItems();
	QuizGroup *group = (QuizGroup *)node();
	if (items.count() > 0)
	{
		QList<int> rows;
		for(int i=0; i<items.count(); ++i)
			rows << items[i]->row();
		qSort(rows);

		if (rows[0]==0) return;
		for(int i=0; i<rows.count(); ++i)
			group->insertChildAt(rows[i]-1, group->takeChildAt(rows[i]));

		fillView();

		ui->table->clearSelection();
		for(int i=0; i<rows.count(); ++i)
			ui->table->item(rows[i]-1, 0)->setSelected(true);
	}
}

void QuizGroupView::on_tbtMoveDown_clicked()
{
	QList<QTableWidgetItem *> items = ui->table->selectedItems();
	QuizGroup *group = (QuizGroup *)node();
	if (items.count() > 0)
	{
		QList<int> rows;
		for(int i=0; i<items.count(); ++i)
			rows << items[i]->row();
		qSort(rows);

		if (rows[rows.count()-1]==ui->table->rowCount()-1) return;
		for(int i=rows.count()-1; i>=0; --i)
			group->insertChildAt(rows[i]+1, group->takeChildAt(rows[i]));

		fillView();

		ui->table->clearSelection();
		for(int i=0; i<rows.count(); ++i)
			ui->table->item(rows[i]+1, 0)->setSelected(true);
	}
}

void QuizGroupView::on_tbtAddShuffle_clicked()
{
	dlgNewGroup dlg(false, true);
	if (dlg.exec()==QDialog::Accepted)
		((QuizGroup *)node())->addChild(dlg.makeGroup()), fillView();
}

void QuizGroupView::on_tbtProperties_clicked()
{
    QTableWidgetItem *item = ui->table->selectedItems()[0];
    QuizCell *cell = (QuizCell *)(ui->table->cellWidget(item->row(), item->column()));
    QuizNode *node = cell->node();
    node->editProperties();
}
