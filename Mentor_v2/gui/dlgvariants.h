#pragma once
#include "../quiz/quiz.h"
#include <QDialog>

namespace Ui { class dlgVariants; }
class dlgVariants : public QDialog
{
    Q_OBJECT
public:
    explicit dlgVariants(Quiz *quiz, QWidget *parent = 0);
    ~dlgVariants();
    Quiz *quiz();
    QString current_title;
protected:
    virtual void timerEvent (QTimerEvent *);

private slots:
    void on_btnbox_accepted();
    void on_btnGenerate_clicked();
    void on_btnViewVariant_clicked();
    void on_btnSelectAll_clicked();
    void on_btnSelectNone_clicked();
    void on_btnWebTests_clicked();

    void on_btnPrintSelected_clicked();

private:
    void fillView();
    Quiz *_quiz;
    Ui::dlgVariants *ui;
};

