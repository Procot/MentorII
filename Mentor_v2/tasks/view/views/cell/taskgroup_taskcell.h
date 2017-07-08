#pragma once
#include "taskcell.h"

namespace Ui { class TaskGroupCell; }
class TaskGroupCell: public TaskCell
{
	Q_OBJECT
public:
	explicit TaskGroupCell (TaskNode *node = NULL, QWidget *parent = 0);
	~TaskGroupCell();
private:
	Ui::TaskGroupCell *ui;
};
