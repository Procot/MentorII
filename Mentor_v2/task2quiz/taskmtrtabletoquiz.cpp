#include "taskmtrtabletoquiz.h"
#include "../quiz/quizgroup.h"
#include "../tasks/taskmtrtable.h"
#include "task2quiz.h"

bool TaskMTRTableToQuiz::accept(TaskNode *value)
{
	return value->nodeType()==TaskMTRTable().nodeType();
}

QuizNode *TaskMTRTableToQuiz::get(TaskNode *value)
{
	QuizGroup *result = new QuizGroup();
	TaskMTRTable *table = (TaskMTRTable *)value;
	result->setDescription(table->description());
	result->setImageFile(table->imageFile());
	result->setTitle(table->title());
	for(int i=0; i<table->columns().count(); ++i)
		for(int j=0; j<table->columns().at(i).count(); ++j)
			result->addChild(TaskToQuiz::instance()->get(table->columns().at(i).at(j)));
	return result;
}

