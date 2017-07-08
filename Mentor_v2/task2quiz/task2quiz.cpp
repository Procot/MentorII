#include "task2quiz.h"
#include "taskgrouptoquiz.h"
#include "taskquestiontoquiz.h"
#include "taskmtrtabletoquiz.h"

TaskToQuiz *TaskToQuiz::instance()
{
	static TaskToQuiz t2q;
	return &t2q;
}

TaskToQuiz::TaskToQuiz()
{
	registerHelper(new TaskGroupToQuiz());
	registerHelper(new TaskQuestionToQuiz());
	registerHelper(new TaskMTRTableToQuiz());
}

QList<QuizNode *> TaskToQuiz::getList (const QList<TaskNode *> &list)
{
	QList<QuizNode *> res;
	QuizNode *item;
	for(int i=0; i<list.count(); ++i)
		if (item = this->get((TaskNode *)list.at(i))) res << item;
	return res;
}
