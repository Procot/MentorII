#include "quizvariant.h"
#include "quiz.h"
#include "gen/generator.h"

QuizVariant::QuizVariant (int number, const QList<GeneratedQuestion *> &list)
{
	this->_number = number;
	this->_data = list;
}

QuizVariant::QuizVariant()
{
}

void QuizVariant::regenerate()
{
	for(int i=0; i<this->_data.count(); ++i)
		delete _data[i];
	_data.clear();
	_questions = quiz()->structure()->questions();
	for(int i=0; i<_questions.count(); ++i)
		_data.append(Generator::instance()->get(_questions.at(i)));
}

QuizVariant *QuizVariant::generateVariant (Quiz *quiz)
{
	QuizVariant *qv = new QuizVariant();
	qv->setQuiz(quiz);
	qv->regenerate();
	return qv;
}


QList<QuizQuestion *> QuizVariant::questions() const
{
	return _questions;
}

QList<GeneratedQuestion *> QuizVariant::generated() const
{
	return _data;
}

int QuizVariant::number() const
{
	return _number;
}

void QuizVariant::setNumber (int newnumber)
{
	_number = newnumber;
}

Quiz *QuizVariant::quiz() const
{
	return _quiz;
}

void QuizVariant::setQuiz (Quiz *q)
{
	_quiz = q;
}
