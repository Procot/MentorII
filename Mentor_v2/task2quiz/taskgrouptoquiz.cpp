#include "taskgrouptoquiz.h"
#include "../quiz/quizgroup.h"
#include "../tasks/taskgroup.h"
#include "task2quiz.h"

bool TaskGroupToQuiz::accept(TaskNode *value)
{
	return value->nodeType()==TaskGroup().nodeType();
}

QuizNode *TaskGroupToQuiz::get(TaskNode *value)
{
	QuizGroup *result = new QuizGroup();
	TaskGroup *group = (TaskGroup *)value;
	result->setDescription(group->description());
	result->setImageFile(group->imageFile());
	result->setTitle(group->title());
	for(int i=0; i<group->children().count(); ++i)
		result->addChild(TaskToQuiz::instance()->get(group->children().at(i)));
	return result;
}

