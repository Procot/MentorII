#include "printscriptrenderer.h"
#include "../scriptrenderer.h"
#include "../../../../utils/txttobmp.h"
#include "../../../quizvariant.h"
#include "../../../quiz.h"
#include "../../../quizgroup.h"
//#include "../../../../gui/dlgvariants.h"


PrintScriptRenderer *PrintScriptRenderer::instance()
{
	static PrintScriptRenderer rend;
	return &rend;
}

QList<PrintScript> PrintScriptRenderer::getVariant (QuizVariant *v)
{
	int number = v->number();
	const QList<GeneratedQuestion *> &questions = v->generated();
	QList<QuestionScript> str = ScriptRenderer::instance()->getVariant(questions);
	QList<PrintScript> list;
	 // PrintScript  head;
	//head.task << current_title;
	//list << head;

	for(int i=0; i<str.count(); ++i)
	{
		PrintScript script;
		script.right = str[i].right();
		QString tmp= ((QuizGroup *)v->quiz()->structure())->title();
		//script.task << "String(\"Тема: " + ((QuizGroup *)v->quiz()->structure())->title() + "\")";
		script.task << QString("String(\"")
						+ "Вариант " + QString::number(number)
						+ ", "
						+ "задача " + QString::number(i+1)
						+ ".\")";
		script.task << str[i].task() << "String( )";

        for(int a=0; a<str[i].answers().count(); ++a)
            script.answers << QString("String(\"Ответ ") + ('a'+a) + "):\")" << str[i].answers().at(a) << "String( )";

		script.solution << "String(\"Решение: вариант " + QString::number(number) + ", задача " + QString::number(i+1) + ".\")";
		script.solution << str[i].task();
		//script.solution << "String(\"Правильный ответ " + (QStringList() << "a" << "b" << "c" << "d")[str[i].right()] + "):\")";
		script.solution << "String(\"Правильный ответ:\")";
		script.solution << str[i].solution();

		list << script;
	}

	return list;
}
