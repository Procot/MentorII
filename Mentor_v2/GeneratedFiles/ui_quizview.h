/********************************************************************************
** Form generated from reading UI file 'quizview.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUIZVIEW_H
#define UI_QUIZVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuizView
{
public:
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *QuizView)
    {
        if (QuizView->objectName().isEmpty())
            QuizView->setObjectName(QStringLiteral("QuizView"));
        QuizView->resize(471, 377);
        verticalLayout = new QVBoxLayout(QuizView);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        retranslateUi(QuizView);

        QMetaObject::connectSlotsByName(QuizView);
    } // setupUi

    void retranslateUi(QWidget *QuizView)
    {
        QuizView->setWindowTitle(QApplication::translate("QuizView", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class QuizView: public Ui_QuizView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUIZVIEW_H
