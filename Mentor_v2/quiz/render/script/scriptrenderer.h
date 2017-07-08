#pragma once
#include "../../../utils/chain.h"
#include "../../gen/generatedquestion.h"
#include <QStringList>

class QuestionScript
{
public:
	const QList<QStringList> &answers() const;
	const QStringList &task() const;
	int right() const;
	const QStringList &solution() const;

	void setRight (int);
	void setAnswers (const QList<QStringList> &);
	void setTask (const QStringList &);
	void setSolution (const QStringList &);

private:
	QList<QStringList> _answers;
	QStringList _task, _solution;
	int _right;
};

class ScriptRenderer: public Chain<GeneratedQuestion *, QuestionScript>
{
public:
	static ScriptRenderer *instance();
	QList<QuestionScript> getVariant (const QList<GeneratedQuestion *> &questions);
	ScriptRenderer();
};

