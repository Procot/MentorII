#pragma once
#include "generatedquestion.h"

class Limits_GeneratedQuestion : public GeneratedQuestion
{
public:
	virtual QString itemType() const { return "limits"; }
	Limits_GeneratedQuestion (QuizQuestion *q);
	Limits_GeneratedQuestion();
	int key() const; void setKey (int newkey);
	int limitIndex() const; void setLimitIndex (int newidx);
	virtual void regenerate();
private:
	int _key, _index;
};

