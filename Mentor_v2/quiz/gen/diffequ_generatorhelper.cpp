#include "diffequ_generatorhelper.h"
#include <QRegExp>
#include "diffequ_generatedquestion.h"

bool diffequ_GeneratorHelper::isValidID (const QString &id)
{
	return QRegExp("diffeq(\\d+)").exactMatch(id);
}

bool diffequ_GeneratorHelper::accept(QuizQuestion *q)
{
	return diffequ_GeneratorHelper::isValidID(q->ID());
}

GeneratedQuestion *diffequ_GeneratorHelper::get (QuizQuestion *q)
{
	return new diffequ_GeneratedQuestion(q);
}
