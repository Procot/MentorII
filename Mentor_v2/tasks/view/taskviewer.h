#pragma once
#include "../tasknode.h"
#include "views/taskview.h"
#include "taskviewer.h"
#include "../../utils/chain.h"

class TaskViewer: public Chain<TaskNode *, TaskView *>
{
public:
	static TaskViewer *instance();
private:
	TaskViewer();
};

