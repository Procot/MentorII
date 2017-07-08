#include "quiznode.h"
#include "quiz.h"
#include <QMessageBox>

void QuizNode::editProperties()
{
    QMessageBox::information(NULL, "Свойства", "Данный объект не содержит настроек");
}

bool QuizNode::hasProperties() const
{
    return false;
}

QuizNode::QuizNode()
{
	setParent(NULL);
}

QuizNode *QuizNode::parent() const
{
	return _parent;
}

void QuizNode::setParent (QuizNode *newparent)
{
	_parent = newparent;
	setQuiz(newparent? newparent->quiz() : NULL);
}

void QuizNode::setQuiz (Quiz *newquiz)
{
	_quiz = newquiz;
}

Quiz *QuizNode::quiz() const
{
	return parent()? parent()->quiz() : _quiz;
}

