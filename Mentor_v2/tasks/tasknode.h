#pragma once
#include <QString>

class TaskTree;
class TaskNode
{
public:
	virtual TaskNode *parent() const;
	virtual void setParent (TaskNode *parent);
	virtual QString nodeType() const = 0;
	virtual TaskTree *taskTree() const;
	virtual void setTaskTree (TaskTree *tree);
	TaskNode();
private:
	TaskNode *_parent;
	TaskTree *_tree;
};

