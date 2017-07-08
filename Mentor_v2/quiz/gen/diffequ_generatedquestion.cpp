#include "diffequ_generatedquestion.h"

diffequ_GeneratedQuestion::diffequ_GeneratedQuestion()
	: GeneratedQuestion(NULL)
{
}

diffequ_GeneratedQuestion::diffequ_GeneratedQuestion (QuizQuestion *q)
	: GeneratedQuestion(q)
{
	setdiffequIndex(q->ID().mid(6).toInt(NULL));
	regenerate();
}

int diffequ_GeneratedQuestion::key() const
{
	return _key;
}

void diffequ_GeneratedQuestion::setKey (int newkey)
{
	_key = newkey;
}

int diffequ_GeneratedQuestion::diffequIndex() const
{
	return _index;
}

void diffequ_GeneratedQuestion::setdiffequIndex (int idx)
{
	_index = idx;
}

void diffequ_GeneratedQuestion::regenerate()
{
	setKey(qrand());
}

/*
bool diffequ_GeneratedQuestion::equals(GeneratedQuestion *other)
{
	if (other->ID() == this->ID())
		return ((diffequ_GeneratedQuestion *)other)->key() == key();
	return false;
}
*/
