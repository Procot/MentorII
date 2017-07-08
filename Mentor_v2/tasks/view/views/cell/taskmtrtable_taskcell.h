#pragma once
#include "taskcell.h"

namespace Ui { class TaskMTRTableCell; }
class TaskMTRTableCell : public TaskCell
{
	Q_OBJECT
public:
	explicit TaskMTRTableCell (TaskNode *node = NULL, QWidget *parent = 0);
	~TaskMTRTableCell();
private:
	Ui::TaskMTRTableCell *ui;
};

