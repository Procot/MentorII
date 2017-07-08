#pragma once
#include "generatedquestion.h"

class Derivs_GeneratedQuestion : public GeneratedQuestion
{
public:
	virtual QString itemType() const { return "derivs"; }
	Derivs_GeneratedQuestion();
	Derivs_GeneratedQuestion (QuizQuestion *q);
	int key() const; void setKey (int newkey);
	int derivIndex() const; void setDerivIndex (int newidx);
	virtual void regenerate();
	//virtual bool equals (GeneratedQuestion *other);
private:
	int _key, _index;
};

