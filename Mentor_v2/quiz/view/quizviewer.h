#pragma once
#include "../quiznode.h"
#include "views/quiznodeview.h"
#include "quizviewerhelper.h"
#include "../../utils/chain.h"

class QuizViewer: public Chain<QuizNode *, QuizNodeView *>
{
public:
	static QuizViewer *instance();
private:
	QuizViewer();
};

