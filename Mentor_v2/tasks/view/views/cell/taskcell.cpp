#include "taskcell.h"

TaskCell::TaskCell (TaskNode *node, QWidget *parent)
	: QWidget(parent)
{
	this->setNode(node);
}

TaskCell *TaskCell::setNode (TaskNode *node)
{
	_node = node;
	return this;
}

TaskNode *TaskCell::node() const
{
	return _node;
}
