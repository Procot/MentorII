#pragma once
#include <QString>
#include "../quizquestion.h"

class GeneratedQuestion
{
public:
	virtual QString itemType() const = 0;
	//virtual QString ID();
	GeneratedQuestion (QuizQuestion *question);
	virtual void regenerate() = 0;
	//virtual bool equals (GeneratedQuestion *other) = 0;
	// + data getters/setters
private:
	QuizQuestion *_question;
};

