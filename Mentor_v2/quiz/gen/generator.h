#pragma once
#include "../../utils/chain.h"
#include "generatedquestion.h"
#include "../quizquestion.h"

class Generator: public Chain<QuizQuestion *, GeneratedQuestion *>
{
public:
	static Generator *instance();
private:
    Generator();
};

