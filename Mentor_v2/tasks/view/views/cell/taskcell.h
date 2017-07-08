#pragma once
#include "../../../tasknode.h"
#include <QWidget>

class TaskCell : public QWidget
{
	Q_OBJECT
public:
	explicit TaskCell(TaskNode *node = NULL, QWidget *parent = 0);
	TaskNode *node() const;
	TaskCell *setNode (TaskNode *node);
signals:
	void enterNode (TaskNode *);
private:
	TaskNode *_node;
};
