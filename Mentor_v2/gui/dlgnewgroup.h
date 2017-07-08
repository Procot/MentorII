#pragma once
#include "../quiz/quizgroup.h"
#include <QDialog>

namespace Ui {
    class dlgNewGroup;
}

class dlgNewGroup : public QDialog
{
	Q_OBJECT
public:
	explicit dlgNewGroup(bool isRandom, bool isShuffle, QWidget *parent = 0);
	~dlgNewGroup();
	QuizGroup *makeGroup() const;
private:
	Ui::dlgNewGroup *ui;
private slots:
	void on_buttonBox_rejected();
	void on_buttonBox_accepted();
};

