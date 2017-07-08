#include "series_generatedquestion.h"

series_GeneratedQuestion::series_GeneratedQuestion()
	: GeneratedQuestion(NULL)
{
}

series_GeneratedQuestion::series_GeneratedQuestion (QuizQuestion *q)
	: GeneratedQuestion(q)
{
	setserIndex(q->ID().mid(6).toInt(NULL));
	regenerate();
}

int series_GeneratedQuestion::key() const
{
	return _key;
}

void series_GeneratedQuestion::setKey (int newkey)
{
	_key = newkey;
}

int series_GeneratedQuestion::serIndex() const
{
	return _index;
}

void series_GeneratedQuestion::setserIndex (int idx)
{
	_index = idx;
}

void series_GeneratedQuestion::regenerate()
{
	setKey(qrand());
}

/*
bool series_GeneratedQuestion::equals(GeneratedQuestion *other)
{
	if (other->ID() == this->ID())
		return ((series_GeneratedQuestion *)other)->key() == key();
	return false;
}
*/
