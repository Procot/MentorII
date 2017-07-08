#pragma once
#include "quizcell.h"

namespace Ui { class QuizQuestionCell; }
class QuizQuestionCell : public QuizCell
{
    Q_OBJECT
public:
	explicit QuizQuestionCell (QuizNode *node, QWidget *parent = 0);
	~QuizQuestionCell();
private:
	Ui::QuizQuestionCell *ui;
};

