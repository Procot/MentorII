#include "taskgroup_taskviewerhelper.h"
#include "../taskgroup.h"
#include "views/taskgroup_taskview.h"
#include <QDebug>

bool TaskGroup_TaskViewerHelper::accept (TaskNode *node)
{
	return node->nodeType()==TaskGroup().nodeType();
}

TaskView *TaskGroup_TaskViewerHelper::get (TaskNode *node)
{
	return new TaskGroupView(node);
}

