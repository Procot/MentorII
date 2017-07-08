#pragma once
#include "taskloaderhelper.h"

class TaskGroup_TaskLoaderHelper : public TaskLoaderHelper {
public:
	virtual bool accept (QDomElement *node);
	virtual TaskNode *get (QDomElement *node);
};

