#include "diffequ_scriptrendererhelper.h"
#include "../../gen/diffequ_generatorhelper.h"
#include "../../gen/diffequ_generatedquestion.h"
#include "m_diffequ.h"

#include <QRegExp>
#include "scriptrenderer.h"
#include "legacy_helpers.h"


bool diffequ_ScriptRendererHelper::accept (GeneratedQuestion *question)
{
	return question->itemType()==diffequ_GeneratedQuestion().itemType();
}


QuestionScript diffequ_ScriptRendererHelper::get (GeneratedQuestion *q)
{
	QuestionScript result;
	range r(-5,5);
	char task[BUFSZ];
	char answers[5][BUFSZ];
	char src[BUFSZ];

	diffequ_GeneratedQuestion *qq = (diffequ_GeneratedQuestion *)q;
	srand(qq->key());
	switch(qq->diffequIndex())
	{
		case  1: diffequ101(r, task, answers, src); break;
		case  2: diffequ102(r, task, answers, src); break;
		case  3: diffequ103(r, task, answers, src); break;
		case  4: diffequ104(r, task, answers, src); break;
		case  5: diffequ105(task, answers); break;
		case  6: diffequ106(task, answers); break;
		
		
        default: qDebug() << qq->diffequIndex();
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

