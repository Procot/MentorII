#include "derivs_generatorhelper.h"
#include <QRegExp>
#include "derivs_generatedquestion.h"

bool Derivs_GeneratorHelper::isValidID (const QString &id)
{
	return QRegExp("deriv(\\d+)").exactMatch(id);
}

bool Derivs_GeneratorHelper::accept(QuizQuestion *q)
{
	return Derivs_GeneratorHelper::isValidID(q->ID());
}

GeneratedQuestion *Derivs_GeneratorHelper::get (QuizQuestion *q)
{
	return new Derivs_GeneratedQuestion(q);
}

