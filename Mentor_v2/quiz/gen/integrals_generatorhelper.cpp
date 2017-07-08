#include "integrals_generatorhelper.h"
#include <QRegExp>
#include "integrals_generatedquestion.h"

bool Integrals_GeneratorHelper::isValidID (const QString &id)
{
    return QRegExp("integ(\\d+)").exactMatch(id);
}

bool Integrals_GeneratorHelper::accept (QuizQuestion *q)
{
    return Integrals_GeneratorHelper::isValidID(q->ID());
}

GeneratedQuestion *Integrals_GeneratorHelper::get (QuizQuestion *q)
{
    return new Integrals_GeneratedQuestion(q);
}

