#include "quizfilter.h"

QuizFilter *QuizFilter::setQuiz (Quiz *q)
{
	_quiz = q;
	return this;
}

Quiz *QuizFilter::quiz() const
{
	return _quiz;
}
