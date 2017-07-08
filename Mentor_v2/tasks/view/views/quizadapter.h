#pragma once
#include "../../tasknode.h"

class QuizAdapter
{
public:
	virtual void addTasks (const QList<TaskNode *> &tasks) = 0;
};

