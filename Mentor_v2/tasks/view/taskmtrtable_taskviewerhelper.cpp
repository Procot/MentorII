#include "taskmtrtable_taskviewerhelper.h"
#include <typeinfo>
#include "../taskmtrtable.h"
#include "../taskquestion.h"
#include "views/taskmtrtable_taskview.h"
#include <QDebug>

bool TaskMTRTable_TaskViewerHelper::accept (TaskNode *node)
{
	return node->nodeType()==TaskMTRTable().nodeType();
}

TaskView *TaskMTRTable_TaskViewerHelper::get (TaskNode *node)
{
	return new TaskMTRTableView(node);
}

