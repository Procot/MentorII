#include "derivs_generatedquestion.h"

Derivs_GeneratedQuestion::Derivs_GeneratedQuestion()
	: GeneratedQuestion(NULL)
{
}

Derivs_GeneratedQuestion::Derivs_GeneratedQuestion (QuizQuestion *q)
	: GeneratedQuestion(q)
{
	setDerivIndex(q->ID().mid(5).toInt(NULL));
	regenerate();
}

int Derivs_GeneratedQuestion::key() const
{
	return _key;
}

void Derivs_GeneratedQuestion::setKey (int newkey)
{
	_key = newkey;
}

int Derivs_GeneratedQuestion::derivIndex() const
{
	return _index;
}

void Derivs_GeneratedQuestion::setDerivIndex (int idx)
{
	_index = idx;
}

void Derivs_GeneratedQuestion::regenerate()
{
	setKey(qrand());
}

/*
bool Derivs_GeneratedQuestion::equals(GeneratedQuestion *other)
{
	if (other->ID() == this->ID())
		return ((Derivs_GeneratedQuestion *)other)->key() == key();
	return false;
}
*/
