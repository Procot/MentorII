#include "limits_generatedquestion.h"

Limits_GeneratedQuestion::Limits_GeneratedQuestion()
	: GeneratedQuestion(NULL)
{
}

Limits_GeneratedQuestion::Limits_GeneratedQuestion (QuizQuestion *q)
	: GeneratedQuestion(q)
{
	setLimitIndex(q->ID().mid(3).toInt(NULL));
	regenerate();
}

int Limits_GeneratedQuestion::key() const
{
	return _key;
}

void Limits_GeneratedQuestion::setKey (int newkey)
{
	_key = newkey;
}

int Limits_GeneratedQuestion::limitIndex() const
{
	return _index;
}

void Limits_GeneratedQuestion::setLimitIndex (int idx)
{
	_index = idx;
}

void Limits_GeneratedQuestion::regenerate()
{
	setKey(qrand());
}

/*
bool Limits_GeneratedQuestion::equals(GeneratedQuestion *other)
{
	if (other->ID() == this->ID())
		return ((Limits_GeneratedQuestion *)other)->key() == key();
	return false;
}
*/
