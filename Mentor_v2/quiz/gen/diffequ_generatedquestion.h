#pragma once
#include "generatedquestion.h"

class diffequ_GeneratedQuestion : public GeneratedQuestion
{
public:
	virtual QString itemType() const { return "diffequis"; }
	diffequ_GeneratedQuestion();
	diffequ_GeneratedQuestion (QuizQuestion *q);
	int key() const; void setKey (int newkey);
	int diffequIndex() const; void setdiffequIndex (int newidx);
	virtual void regenerate();
	//virtual bool equals (GeneratedQuestion *other);
private:
	int _key, _index;
};