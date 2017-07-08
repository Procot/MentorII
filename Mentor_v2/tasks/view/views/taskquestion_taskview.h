#pragma once
#include "taskview.h"

namespace Ui { class TaskQuestionView; }
class TaskQuestionView : public TaskView
{
	Q_OBJECT
public:
	explicit TaskQuestionView(TaskNode *node, QWidget *parent = 0);
	~TaskQuestionView();
	virtual QList<TaskNode *> selected();
private:
	Ui::TaskQuestionView *ui;
private slots:
	void on_pushButton_clicked();
};

