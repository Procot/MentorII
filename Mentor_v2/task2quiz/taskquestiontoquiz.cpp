#include "taskquestiontoquiz.h"
#include "../quiz/quizquestion.h"
#include "../tasks/taskquestion.h"
#include "task2quiz.h"

bool TaskQuestionToQuiz::accept (TaskNode *value)
{
	return value->nodeType() == TaskQuestion().nodeType();
}

QuizNode *TaskQuestionToQuiz::get (TaskNode *value)
{
	QuizQuestion *result = new QuizQuestion();
	TaskQuestion *question = (TaskQuestion *)value;
	result->setID(question->ID());
	result->setImageFile(question->imageFile());
	return result;
}

