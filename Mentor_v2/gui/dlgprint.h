#ifndef DLGPRINT_H
#define DLGPRINT_H

#include <QDialog>

namespace Ui {
    class dlgPrint;
}

class dlgPrint : public QDialog
{
    Q_OBJECT

public:
    explicit dlgPrint(QWidget *parent = 0);
    ~dlgPrint();

private:
    Ui::dlgPrint *ui;
};

#endif // DLGPRINT_H
