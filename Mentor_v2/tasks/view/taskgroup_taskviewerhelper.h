#pragma once
#include "taskviewerhelper.h"

class TaskGroup_TaskViewerHelper: public TaskViewerHelper {
public:
	virtual bool accept (TaskNode *node);
	virtual TaskView *get (TaskNode *node);
};

