#include "scriptrenderer.h"
#include "limits_scriptrendererhelper.h"
#include "derivs_scriptrendererhelper.h"
#include "integrals_scriptrendererhelper.h"
#include "series_scriptrendererhelper.h"
#include "diffequ_scriptrendererhelper.h"

const QList<QStringList> &QuestionScript::answers() const
{
	return _answers;
}

const QStringList &QuestionScript::task() const
{
	return _task;
}

int QuestionScript::right() const
{
	return _right;
}

const QStringList &QuestionScript::solution() const
{
	return _solution;
}

void QuestionScript::setRight (int v)
{
	_right = v;
}

void QuestionScript::setAnswers (const QList<QStringList> &v)
{
	_answers = v;
}

void QuestionScript::setTask (const QStringList &v)
{
	_task = v;
}

void QuestionScript::setSolution (const QStringList &v)
{
	_solution = v;
}


ScriptRenderer *ScriptRenderer::instance()
{
	static ScriptRenderer renderer;
	return &renderer;
}

ScriptRenderer::ScriptRenderer()
{
	registerHelper(new Limits_ScriptRendererHelper());
	registerHelper(new Derivs_ScriptRendererHelper());
    registerHelper(new Integrals_ScriptRendererHelper());
	registerHelper(new series_ScriptRendererHelper());
	registerHelper(new diffequ_ScriptRendererHelper());
}

QList<QuestionScript> ScriptRenderer::getVariant (const QList<GeneratedQuestion *> &questions)
{
	QList<QuestionScript> list;
	for(int i=0; i<questions.count(); ++i)
		list << this->get(questions[i]);
	return list;
}
