#pragma once
#include "taskcell.h"

namespace Ui { class TaskQuestionCell; }
class TaskQuestionCell : public TaskCell
{
	Q_OBJECT
public:
	explicit TaskQuestionCell (TaskNode *node = NULL, QWidget *parent = 0);
	~TaskQuestionCell();
private:
	Ui::TaskQuestionCell *ui;
};
