#pragma once
#include "../quizquestion.h"
#include "../quizvariant.h"
#include <QList>

class Quiz;
class QuizFilter
{
public:
	virtual QuizFilter *applyToVariant (QuizVariant *v) const = 0;
	virtual QuizFilter *applyToQuiz() const = 0;

	virtual QuizFilter *setQuiz (Quiz *q);
	virtual Quiz *quiz() const;

private:
	Quiz *_quiz;
};
