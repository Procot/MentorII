#pragma once
#include "../quiz/quizvariant.h"
#include <QDialog>

namespace Ui {
class dlgVariant;
}

class dlgVariant : public QDialog
{
    Q_OBJECT
    
public:
    explicit dlgVariant(QuizVariant *variant, QWidget *parent = 0);
    ~dlgVariant();
    
private slots:
    void on_btnUpdateView_clicked();

    void on_btnRegenerate_clicked();

    void on_btnClose_clicked();

private:
    QuizVariant *variant;
    void updateView();
    Ui::dlgVariant *ui;
};

