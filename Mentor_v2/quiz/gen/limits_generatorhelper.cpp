#include "limits_generatorhelper.h"
#include <QRegExp>
#include "limits_generatedquestion.h"

bool Limits_GeneratorHelper::isValidID (const QString &id)
{
	return QRegExp("lim(\\d+)").exactMatch(id);
}

bool Limits_GeneratorHelper::accept(QuizQuestion *q)
{
	return Limits_GeneratorHelper::isValidID(q->ID());
}

GeneratedQuestion *Limits_GeneratorHelper::get (QuizQuestion *q)
{
	return new Limits_GeneratedQuestion(q);
}

