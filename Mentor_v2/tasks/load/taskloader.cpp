#include "taskloader.h"
#include "taskgroup_taskloaderhelper.h"
#include "taskmtrtable_taskloaderhelper.h"
#include "taskquestion_taskloaderhelper.h"
#include <QDebug>

//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//

TaskLoader::TaskLoader()
{
	registerHelper(new TaskMTRTable_TaskLoaderHelper());
	registerHelper(new TaskGroup_TaskLoaderHelper());
	registerHelper(new TaskQuestion_TaskLoaderHelper());
}

//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//

/**
 * Предполагается, что TaskLoader нужен всего один.
 */
TaskLoader *TaskLoader::instance()
{
	static TaskLoader loader;
	return &loader;
}

//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//

