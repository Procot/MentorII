#pragma once
#include "../../quizgroup.h"

class QuizGroupFilter {
public:
    virtual QString itemType() const = 0;
    QuizGroupFilter (QuizGroup *prnt = NULL);
	void setParent (QuizGroup *group); QuizGroup *parent() const;
	virtual QList<QuizQuestion *> questions (const QList<QuizQuestion *> &in) = 0;
private:
	QuizGroup *_parent;
};

