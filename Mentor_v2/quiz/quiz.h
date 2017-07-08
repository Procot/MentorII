#pragma once
#include <QList>
#include "quiznode.h"
#include "quizvariant.h"
#include "filter/quizfilter.h"

/*!
 * \class Quiz
 * Контрольная работа с конкретными выбранными (и настроенными) заданиями
 * Содержит варианты, структуру заданий, по которой они генерируются,
 * и стек фильтров, позволяющих влиять на генерацию (например, отсеивать
 * какие-то нежелательные случаи).
 */
class Quiz
{
public:
	Quiz();
	QuizNode *structure() const;
	void setStructure (QuizNode *root);

    const QList<QuizFilter *> &filters() const;
	void addFilter (QuizFilter *filter);
	void removeFilter (int index);

	QList< QList<QuizVariant *> > variants();
	void addVariantGroup();
	void addVariant (int group, QuizVariant *q);
	void generate (int count, int groups = 1);

private:
	QuizNode *_structure;
	QList< QList<QuizVariant *> > _variants;
	QList<QuizFilter *> _filters;
};

