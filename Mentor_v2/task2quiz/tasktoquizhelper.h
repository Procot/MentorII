#pragma once
#include "../utils/chain.h"
#include "../tasks/tasknode.h"
#include "../quiz/quiznode.h"

typedef ChainHelper<TaskNode *, QuizNode *> TaskToQuizHelper;

