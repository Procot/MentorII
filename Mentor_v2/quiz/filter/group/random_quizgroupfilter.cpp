#include "random_quizgroupfilter.h"

RandomQuizGroupFilter::RandomQuizGroupFilter (QuizGroup *p)
	: QuizGroupFilter(p)
{
}

QList<QuizQuestion *> RandomQuizGroupFilter::questions (const QList<QuizQuestion *> &in)
{
	if (in.count()==0) return QList<QuizQuestion *>();
	return (QList<QuizQuestion *>() << in[qrand() % in.count()]);
}

