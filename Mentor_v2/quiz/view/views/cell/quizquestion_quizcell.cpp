#include "quizquestion_quizcell.h"
#include "ui_quizquestion_quizcell.h"
#include "../../../quizquestion.h"

QuizQuestionCell::QuizQuestionCell (QuizNode *node, QWidget *parent) :
	QuizCell(node, parent),
	ui(new Ui::QuizQuestionCell)
{
	ui->setupUi(this);
	QuizQuestion *q = (QuizQuestion *)node;
	ui->label->setPixmap(QPixmap::fromImage(q->image()));
}

QuizQuestionCell::~QuizQuestionCell()
{
	delete ui;
}

