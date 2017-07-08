#include "taskview.h"

TaskView::TaskView (TaskNode *node, QWidget *parent) :
	QFrame(parent)
{
	this->setNode(node);
}

TaskNode *TaskView::node()
{
	return this->_node;
}

TaskView *TaskView::setNode(TaskNode *node)
{
	_node = node;
	return this;
}

