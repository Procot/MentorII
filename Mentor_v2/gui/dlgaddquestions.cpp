#include "dlgaddquestions.h"
#include "ui_dlgaddquestions.h"

dlgAddQuestions::dlgAddQuestions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dlgAddQuestions)
{
    ui->setupUi(this);
    ui->linName->setSelection(0, ui->linName->text().length());
}

dlgAddQuestions::~dlgAddQuestions()
{
    delete ui;
}

bool dlgAddQuestions::isCreateGroup() const
{
    return _create_group;
}

bool dlgAddQuestions::useRandomFilter() const
{
    return ui->chkRandom->isChecked();
}

QString dlgAddQuestions::groupName() const
{
    return ui->linName->text();
}

void dlgAddQuestions::on_btnNoGroup_clicked()
{
    _create_group = false;
    accept();
}

void dlgAddQuestions::on_buttonBox_accepted()
{
    _create_group = true;
    accept();
}

void dlgAddQuestions::on_buttonBox_rejected()
{
    reject();
}
