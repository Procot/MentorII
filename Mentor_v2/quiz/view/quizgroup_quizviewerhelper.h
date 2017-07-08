#pragma once
#include "views/quiznodeview.h"
#include "../quiznode.h"
#include "quizviewerhelper.h"

class QuizGroup_QuizViewerHelper: public QuizViewerHelper {
public:
	virtual bool accept (QuizNode *item);
	virtual QuizNodeView *get (QuizNode *item);
};

