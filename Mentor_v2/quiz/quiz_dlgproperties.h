#ifndef QUIZ_DLGPROPERTIES_H
#define QUIZ_DLGPROPERTIES_H

#include <QDialog>

namespace Ui {
class dlgQuizProperties;
}

class dlgQuizProperties : public QDialog
{
    Q_OBJECT
    
public:
    explicit dlgQuizProperties(QWidget *parent = 0);
    ~dlgQuizProperties();
    
private:
    Ui::dlgQuizProperties *ui;
};

#endif // QUIZ_DLGPROPERTIES_H
