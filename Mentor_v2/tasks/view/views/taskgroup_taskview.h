#pragma once
#include <QList>
#include "taskview.h"
#include "cell/taskcell.h"

namespace Ui { class TaskGroupView; }
class TaskGroupView : public TaskView
{
	Q_OBJECT
public:
	explicit TaskGroupView(TaskNode *node, QWidget *parent = 0);
	~TaskGroupView();
	virtual QList<TaskNode *> selected();
private:
	void fillView();
	TaskCell *cell (TaskNode *node);
	Ui::TaskGroupView *ui;
	QList<TaskCell *> cellviews;
protected:
	virtual void timerEvent (QTimerEvent *);
private slots:
	void on_tbtAddSelected_clicked();
	void on_tbtUpLevel_clicked();
	void on_tableWidget_cellDoubleClicked(int row, int column);
};

