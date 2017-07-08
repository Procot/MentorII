#include "quizview.h"
#include "ui_quizview.h"
#include "quizviewer.h"
#include "../quiz.h"
#include <QDebug>

QuizView::QuizView(Quiz *quiz, QWidget *parent) :
	QWidget(parent),
	ui(new Ui::QuizView)
{
	nodeview = NULL;
	ui->setupUi(this);
    qDebug() << quiz->structure();
    displayNode(quiz->structure());
    qDebug() << quiz->structure();
}

QuizView::~QuizView()
{
	delete ui;
}

QList<QuizNode *> QuizView::selected() const
{
	return 	QList<QuizNode *>();
}

void QuizView::displayNode (QuizNode *node)
{
	QuizNodeView *nextview = QuizViewer::instance()->get(node);
	if (nextview)
	{
        qDebug() << "nextview found";
        if (nodeview)
		{
            qDebug() << "deleting nodeview";
            this->layout()->removeWidget(nodeview);
			disconnect(nodeview, SIGNAL(enterNode(QuizNode*)), this, SLOT(displayNode(QuizNode*)));
			nodeview->deleteLater();
            qDebug() << "deleting nodeview done";
        }
		nodeview = nextview;
		nodeview->setParent(this);
		this->layout()->addWidget(nodeview);
		connect(nodeview, SIGNAL(enterNode(QuizNode*)), this, SLOT(displayNode(QuizNode*)));
	}
}

