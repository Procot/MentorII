#include "quiz_dlgproperties.h"
#include "ui_quiz_dlgproperties.h"

dlgQuizProperties::dlgQuizProperties(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dlgQuizProperties)
{
    ui->setupUi(this);
}

dlgQuizProperties::~dlgQuizProperties()
{
    delete ui;
}
