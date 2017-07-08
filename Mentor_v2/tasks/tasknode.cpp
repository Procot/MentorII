#include "tasknode.h"

TaskNode *TaskNode::parent() const
{
	return _parent;
}

void TaskNode::setParent (TaskNode *parent)
{
	_parent = parent;
	setTaskTree(parent? parent->taskTree() : NULL);
}
TaskNode::TaskNode():_parent(),_tree()
{

}

TaskTree *TaskNode::taskTree() const
{
	return parent()? parent()->taskTree() : _tree;
}

void TaskNode::setTaskTree (TaskTree *tree)
{
	_tree = tree;
}

