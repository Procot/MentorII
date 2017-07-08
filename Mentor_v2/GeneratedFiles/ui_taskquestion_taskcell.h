/********************************************************************************
** Form generated from reading UI file 'taskquestion_taskcell.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKQUESTION_TASKCELL_H
#define UI_TASKQUESTION_TASKCELL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskQuestionCell
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *label;

    void setupUi(QWidget *TaskQuestionCell)
    {
        if (TaskQuestionCell->objectName().isEmpty())
            TaskQuestionCell->setObjectName(QStringLiteral("TaskQuestionCell"));
        TaskQuestionCell->resize(86, 47);
        gridLayout_2 = new QGridLayout(TaskQuestionCell);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        frame = new QFrame(TaskQuestionCell);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setContentsMargins(5, 5, 5, 5);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("background-color: white;"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(TaskQuestionCell);

        QMetaObject::connectSlotsByName(TaskQuestionCell);
    } // setupUi

    void retranslateUi(QWidget *TaskQuestionCell)
    {
        TaskQuestionCell->setWindowTitle(QApplication::translate("TaskQuestionCell", "Form", 0));
        label->setText(QApplication::translate("TaskQuestionCell", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class TaskQuestionCell: public Ui_TaskQuestionCell {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKQUESTION_TASKCELL_H
