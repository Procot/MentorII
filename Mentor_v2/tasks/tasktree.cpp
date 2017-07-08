#include "tasktree.h"
#include "load/taskloader.h"
#include <QtXml/QDomDocument>
#include <QDebug>

void TaskTree::setRoot (TaskNode *rootnode)
{
	_root = rootnode;
	_root->setParent(NULL);
	_root->setTaskTree(this);
}

TaskNode *TaskTree::root()
{
	return this->_root;
}
