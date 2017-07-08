#include "quiznodeview.h"

QuizNodeView::QuizNodeView (QuizNode *item, QWidget *parent) :
	QFrame(parent)
{
	this->setNode(item);
}

QuizNode *QuizNodeView::node()
{
	return this->_node;
}

void QuizNodeView::setNode (QuizNode *item)
{
	_node = item;
}

