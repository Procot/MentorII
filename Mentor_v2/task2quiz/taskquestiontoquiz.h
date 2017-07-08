#pragma once
#include "tasktoquizhelper.h"

class TaskQuestionToQuiz : public TaskToQuizHelper
{
public:
	virtual bool accept (TaskNode *value);
	virtual QuizNode *get (TaskNode *value);
};
