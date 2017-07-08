#pragma once
#include "../utils/chain.h"
#include "../tasks/tasknode.h"
#include "../quiz/quiznode.h"

class TaskToQuiz: public Chain<TaskNode *, QuizNode *>
{
public:
	static TaskToQuiz *instance();
	QList<QuizNode *> getList (const QList<TaskNode *> &list);
private:
    TaskToQuiz();
};

