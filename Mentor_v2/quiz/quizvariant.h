#pragma once
#include "quizquestion.h"
#include "gen/generatedquestion.h"

class Quiz;
class QuizVariant {
public:
	static QuizVariant *generateVariant (Quiz *quiz);
public:
	QuizVariant();
	QuizVariant (int number, const QList<GeneratedQuestion *> &list);
	QList<QuizQuestion *> questions() const;
	QList<GeneratedQuestion *> generated() const;
	int number() const;
	void setNumber (int newnumber);
	void regenerate();
	void setQuiz (Quiz *quiz); Quiz *quiz() const;
protected:
	Quiz *_quiz;
	QList<QuizQuestion *> _questions;
	QList<GeneratedQuestion *> _data;
	int _number;
};

