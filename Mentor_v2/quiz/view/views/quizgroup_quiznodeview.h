#pragma once
#include "quiznodeview.h"
#include "cell/quizcell.h"

namespace Ui { class QuizGroupView; }
class QuizGroupView : public QuizNodeView
{
	Q_OBJECT
public:
	explicit QuizGroupView(QuizNode *item, QWidget *parent = 0);
	~QuizGroupView();
	void addItems (const QList<QuizNode *> &items);
	void removeSelected();
	QList<QuizNode *> selected();
private:
	void fillView();
	QuizCell *cell (QuizNode *item);
	Ui::QuizGroupView *ui;
protected:
	virtual void timerEvent (QTimerEvent *);
private slots:
	void on_tbtAddShuffle_clicked();
 void on_tbtMoveDown_clicked();
 void on_tbtMoveUp_clicked();
 void on_tbtRemove_clicked();
 void on_tbtAddRandom_clicked();
 void on_tbtUpLevel_clicked();
	void on_table_cellDoubleClicked(int row, int column);
    void on_tbtProperties_clicked();
};

