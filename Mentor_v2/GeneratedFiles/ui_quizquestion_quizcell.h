/********************************************************************************
** Form generated from reading UI file 'quizquestion_quizcell.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUIZQUESTION_QUIZCELL_H
#define UI_QUIZQUESTION_QUIZCELL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_QuizQuestionCell
{
public:
    QGridLayout *gridLayout;
    QLabel *label;

    void setupUi(QFrame *QuizQuestionCell)
    {
        if (QuizQuestionCell->objectName().isEmpty())
            QuizQuestionCell->setObjectName(QStringLiteral("QuizQuestionCell"));
        QuizQuestionCell->resize(73, 50);
        QuizQuestionCell->setFrameShape(QFrame::Box);
        QuizQuestionCell->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(QuizQuestionCell);
        gridLayout->setContentsMargins(5, 5, 5, 5);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(QuizQuestionCell);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("background-color: white;"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(QuizQuestionCell);

        QMetaObject::connectSlotsByName(QuizQuestionCell);
    } // setupUi

    void retranslateUi(QFrame *QuizQuestionCell)
    {
        QuizQuestionCell->setWindowTitle(QApplication::translate("QuizQuestionCell", "Frame", 0));
        label->setText(QApplication::translate("QuizQuestionCell", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class QuizQuestionCell: public Ui_QuizQuestionCell {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUIZQUESTION_QUIZCELL_H
