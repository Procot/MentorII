#pragma once
#include "taskviewerhelper.h"

class TaskMTRTable_TaskViewerHelper: public TaskViewerHelper {
public:
	virtual bool accept (TaskNode *node);
	virtual TaskView *get (TaskNode *node);
};

