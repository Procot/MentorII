#include "quizgroup_quizviewerhelper.h"
#include "views/quizgroup_quiznodeview.h"
#include <typeinfo>
#include "../quizgroup.h"

bool QuizGroup_QuizViewerHelper::accept (QuizNode *item)
{
    qDebug() << "item type: " << item->itemType();
	return item->itemType()==QuizGroup().itemType();
}

QuizNodeView *QuizGroup_QuizViewerHelper::get (QuizNode *item)
{
    qDebug() << "creating QuizGroupView";
	return new QuizGroupView(item);
}

