#include "quizviewer.h"
#include "quizgroup_quizviewerhelper.h"

QuizViewer *QuizViewer::instance()
{
	static QuizViewer quizviewer;
	return &quizviewer;
}

QuizViewer::QuizViewer()
{
	registerHelper(new QuizGroup_QuizViewerHelper());
}

