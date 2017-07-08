#include "shuffle_quizgroupfilter.h"

ShuffleQuizGroupFilter::ShuffleQuizGroupFilter (QuizGroup *p)
	: QuizGroupFilter(p)
{
}

QList<QuizQuestion *> ShuffleQuizGroupFilter::questions (const QList<QuizQuestion *> &input)
{
	QList<QuizQuestion *> in = input;
	for(int i=0; i<20; ++i)
	{
		int first = qrand() % in.count();
		int second = qrand() % in.count();
		QuizQuestion *save = in[first];
		in[first] = in[second];
		in[second] = save;
	}
	return in;
}

