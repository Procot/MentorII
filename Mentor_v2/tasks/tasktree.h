#pragma once
#include <QString>

class TaskNode;
class TaskTree
{
public:
	virtual TaskNode *root();
	virtual void setRoot (TaskNode *rootnode);
protected:
	TaskNode *_root;
};

