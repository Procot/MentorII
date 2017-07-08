#pragma once
#include "../../../gen/generatedquestion.h"
#include <QStringList>
#include <QPair>
#include "../../../quizvariant.h"
struct PrintScript
{
	QStringList task, answers, solution;
	int right;
};

class PrintScriptRenderer
{
public:
	static PrintScriptRenderer *instance();
	QList<PrintScript> getVariant (QuizVariant *v); //int number, const QList<GeneratedQuestion *> &questions);
};

