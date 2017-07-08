#include "series_generatorhelper.h"
#include <QRegExp>
#include "series_generatedquestion.h"

bool series_GeneratorHelper::isValidID (const QString &id)
{
	return QRegExp("series(\\d+)").exactMatch(id);
}

bool series_GeneratorHelper::accept(QuizQuestion *q)
{
	return series_GeneratorHelper::isValidID(q->ID());
}

GeneratedQuestion *series_GeneratorHelper::get (QuizQuestion *q)
{
	return new series_GeneratedQuestion(q);
}

