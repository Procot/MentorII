#include "taskquestion_taskviewerhelper.h"
#include <typeinfo>
#include "../taskquestion.h"
#include "views/taskquestion_taskview.h"

bool TaskQuestion_TaskViewerHelper::accept (TaskNode *node)
{
	return typeid(*node)==typeid(TaskQuestion);
}

TaskView *TaskQuestion_TaskViewerHelper::get (TaskNode *node)
{
	return new TaskQuestionView(node);
}

