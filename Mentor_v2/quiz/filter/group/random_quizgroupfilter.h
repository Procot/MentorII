#pragma once
#include "quizgroupfilter.h"

class RandomQuizGroupFilter : public QuizGroupFilter
{
public:
    virtual QString itemType() const { return "random"; }
    RandomQuizGroupFilter (QuizGroup *p = NULL);
	virtual QList<QuizQuestion *> questions (const QList<QuizQuestion *> &in);
};

