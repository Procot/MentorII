#ifndef DLGADDQUESTIONS_H
#define DLGADDQUESTIONS_H

#include <QDialog>

namespace Ui {
class dlgAddQuestions;
}

class dlgAddQuestions : public QDialog
{
    Q_OBJECT
    
public:
    explicit dlgAddQuestions(QWidget *parent = 0);
    ~dlgAddQuestions();

    bool isCreateGroup() const;
    bool useRandomFilter() const;
    QString groupName() const;
    
private slots:
    void on_btnNoGroup_clicked();

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    bool _create_group;
    QString _name;
    Ui::dlgAddQuestions *ui;
};

#endif // DLGADDQUESTIONS_H
