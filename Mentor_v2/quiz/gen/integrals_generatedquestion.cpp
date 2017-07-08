#include "integrals_generatedquestion.h"

Integrals_GeneratedQuestion::Integrals_GeneratedQuestion()
    : GeneratedQuestion(NULL)
{
}

Integrals_GeneratedQuestion::Integrals_GeneratedQuestion (QuizQuestion *q)
    : GeneratedQuestion(q)
{
    setIntegralIndex(q->ID().mid(5).toInt(NULL));
    regenerate();
}

int Integrals_GeneratedQuestion::key() const
{
    return _key;
}

void Integrals_GeneratedQuestion::setKey (int newkey)
{
    _key = newkey;
}

int Integrals_GeneratedQuestion::integralIndex() const
{
    return _index;
}

void Integrals_GeneratedQuestion::setIntegralIndex (int idx)
{
    _index = idx;
}

void Integrals_GeneratedQuestion::regenerate()
{
    setKey(qrand());
}

