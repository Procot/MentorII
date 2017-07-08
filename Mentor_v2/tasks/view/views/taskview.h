#pragma once
#include <QFrame>
#include "../../tasknode.h"
#include "quizadapter.h"

class QuizAdapter;
class TaskView : public QFrame
{
	Q_OBJECT
public:
	explicit TaskView (TaskNode *node, QWidget *parent = 0);
	virtual QList<TaskNode *> selected() = 0;
	TaskView *setNode (TaskNode *node);
	TaskNode *node();
	void setQuizAdapter (QuizAdapter *adapter) { _adapter = adapter; }
	QuizAdapter *quizAdapter() const { return _adapter; }
signals:
	void enterNode (TaskNode *node);
private:
	QuizAdapter *_adapter;
	TaskNode *_node;
};

