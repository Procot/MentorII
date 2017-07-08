#ifndef QUIZGROUP_DLGPROPERTIES_H
#define QUIZGROUP_DLGPROPERTIES_H
#include <QDialog>
#include "quizgroup.h"

namespace Ui { class dlgQuizGroupProperties; }

class dlgQuizGroupProperties : public QDialog
{
    Q_OBJECT
public:
    explicit dlgQuizGroupProperties(QuizGroup *group, QWidget *parent = 0);
    ~dlgQuizGroupProperties();
private slots:
    void on_btnbox_accepted();

    void on_btnbox_rejected();

private:
    Ui::dlgQuizGroupProperties *ui;
    QuizGroup *_group;
};


#endif // QUIZGROUP_DLGPROPERTIES_H
