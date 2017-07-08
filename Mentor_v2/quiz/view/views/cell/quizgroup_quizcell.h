#pragma once
#include "quizcell.h"

namespace Ui { class QuizGroupCell; }
class QuizGroupCell : public QuizCell
{
    Q_OBJECT
public:
	explicit QuizGroupCell (QuizNode *node, QWidget *parent = 0);
	~QuizGroupCell();
private:
	Ui::QuizGroupCell *ui;
private slots:
    void updateNotify();
};

