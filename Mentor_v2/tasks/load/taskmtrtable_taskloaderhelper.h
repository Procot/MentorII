#pragma once
#include "taskloaderhelper.h"

class TaskMTRTable_TaskLoaderHelper : public TaskLoaderHelper {
public:
	virtual bool accept (QDomElement *node);
	virtual TaskNode *get (QDomElement *node);
};

