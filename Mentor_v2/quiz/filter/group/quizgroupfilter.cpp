#include "quizgroupfilter.h"

QuizGroupFilter::QuizGroupFilter (QuizGroup *prnt)
{
	setParent(prnt);
}

void QuizGroupFilter::setParent (QuizGroup *group)
{
	_parent = group;
}

QuizGroup *QuizGroupFilter::parent() const
{
	return _parent;
}

