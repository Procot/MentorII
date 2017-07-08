#pragma once
#include "taskview.h"
#include "cell/taskcell.h"

namespace Ui { class TaskMTRTableView; }
class TaskMTRTableView : public TaskView
{
	Q_OBJECT

public:
	explicit TaskMTRTableView(TaskNode *node, QWidget *parent = 0);
	~TaskMTRTableView();
	virtual QList<TaskNode *> selected();
private:
	Ui::TaskMTRTableView *ui;
	void fillView();
	TaskCell *cell (TaskNode *node);
	QList<TaskCell *> cellviews;
protected:
	virtual void timerEvent (QTimerEvent *);
private slots:
	void on_tbtAddSelected_clicked();
 void on_tbtUpLevel_clicked();
	void on_tableWidget_cellDoubleClicked(int row, int column);
};

