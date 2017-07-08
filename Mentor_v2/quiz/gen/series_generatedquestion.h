#pragma once
#include "generatedquestion.h"

class series_GeneratedQuestion : public GeneratedQuestion
{
public:
	virtual QString itemType() const { return "seriesis"; }
	series_GeneratedQuestion();
	series_GeneratedQuestion (QuizQuestion *q);
	int key() const; void setKey (int newkey);
	int serIndex() const; void setserIndex (int newidx);
	virtual void regenerate();
	//virtual bool equals (GeneratedQuestion *other);
private:
	int _key, _index;
};

