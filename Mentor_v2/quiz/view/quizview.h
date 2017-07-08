#pragma once
#include <QWidget>
#include "../quiznode.h"
#include "views/quiznodeview.h"
#include "../quiz.h"

namespace Ui { class QuizView; }
class QuizView : public QWidget
{
	Q_OBJECT
public:
	explicit QuizView (Quiz *quiz, QWidget *parent = 0);
	~QuizView();
	virtual QList<QuizNode *> selected() const;
	QuizNodeView *nodeView() const { return nodeview; }
public slots:
	virtual void displayNode (QuizNode *node);
private:
	QuizNodeView *nodeview;
	Ui::QuizView *ui;
};

