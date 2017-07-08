#pragma once
#include <QFrame>
#include "../../quiznode.h"

class QuizNodeView : public QFrame
{
	Q_OBJECT
public:
	explicit QuizNodeView (QuizNode *item = NULL, QWidget *parent = 0);
	void setNode (QuizNode *item);
	QuizNode *node();
	virtual void addItems (const QList<QuizNode *> &items) = 0;
	virtual void removeSelected() = 0;
	virtual QList<QuizNode *> selected() = 0;
signals:
	void enterNode (QuizNode *node);
private:
	QuizNode *_node;
};

