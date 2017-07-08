#include "taskviewer.h"
#include "taskgroup_taskviewerhelper.h"
#include "taskquestion_taskviewerhelper.h"
#include "taskmtrtable_taskviewerhelper.h"
#include "../taskgroup.h"

TaskViewer *TaskViewer::instance()
{
	static TaskViewer taskviewer;
	return &taskviewer;
}

TaskViewer::TaskViewer()
{
	registerHelper(new TaskGroup_TaskViewerHelper());
	registerHelper(new TaskMTRTable_TaskViewerHelper());
	//registerCustomViewer(new QuestionTaskViewer());
}

