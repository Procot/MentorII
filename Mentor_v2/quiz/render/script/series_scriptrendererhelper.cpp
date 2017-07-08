#include "series_scriptrendererhelper.h"
#include "../../gen/series_generatorhelper.h"
#include "../../gen/series_generatedquestion.h"
#include "m_series.h"

#include <QRegExp>
#include "scriptrenderer.h"
#include "legacy_helpers.h"


bool series_ScriptRendererHelper::accept (GeneratedQuestion *question)
{
	return question->itemType()==series_GeneratedQuestion().itemType();
}


QuestionScript series_ScriptRendererHelper::get (GeneratedQuestion *q)
{
	QuestionScript result;
	range r(-5,5);
	char task[BUFSZ];
	char answers[5][BUFSZ];
	char src[BUFSZ];

	series_GeneratedQuestion *qq = (series_GeneratedQuestion *)q;
	srand(qq->key());
	switch(qq->serIndex())
	{
		case  1: series101(r, task, answers, src); break;
		case  2: series102(r, task, answers, src); break;
		case  3: series103(r, task, answers, src); break;
		case  4: series104(r, task, answers, src); break;
		case  5: series105(r, task, answers, src); break;
		case  6: series106(r, task, answers, src); break;
		case  7: series107(r, task, answers, src); break;
		case  8: series108(r, task, answers, src); break;
		case  9: series109(r, task, answers, src); break;
		case  10: series110(r, task, answers, src); break;
		case  11: series111(r, task, answers, src); break;
		case  12: series112(r, task, answers, src); break;
		case  13: series113(r, task, answers, src); break;
		
        default: qDebug() << qq->serIndex();
    }

	QStringList tsk, solution;
	QList<QStringList> answ;

	tsk << stringtolist(task);

	answ << stringtolist(answers[0]);
	answ << stringtolist(answers[1]);
	answ << stringtolist(answers[2]);
	answ << stringtolist(answers[3]);

	/*if(answers[4]!=NULL)answ << stringtolist(answers[4]);*///
	int right = shuffleAnswers(answ);

	solution << answ[right];

	result.setTask(tsk);
	result.setAnswers(answ);
	result.setRight(right);
	result.setSolution(solution);
	return result; //genlim(qq->limitIndex(), qq->key());
}

