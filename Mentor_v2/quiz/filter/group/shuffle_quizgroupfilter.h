#pragma once
#include "quizgroupfilter.h"

class ShuffleQuizGroupFilter : public QuizGroupFilter
{
public:
    virtual QString itemType() const { return "shuffle"; }
    ShuffleQuizGroupFilter (QuizGroup *p = NULL);
	virtual QList<QuizQuestion *> questions (const QList<QuizQuestion *> &in);
};

