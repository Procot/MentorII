#include "dlgprint.h"
#include "ui_dlgprint.h"

dlgPrint::dlgPrint(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dlgPrint)
{
    ui->setupUi(this);
}

dlgPrint::~dlgPrint()
{
    delete ui;
}
