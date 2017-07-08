/********************************************************************************
** Form generated from reading UI file 'taskquestion_taskview.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKQUESTION_TASKVIEW_H
#define UI_TASKQUESTION_TASKVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskQuestionView
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label;

    void setupUi(QWidget *TaskQuestionView)
    {
        if (TaskQuestionView->objectName().isEmpty())
            TaskQuestionView->setObjectName(QStringLiteral("TaskQuestionView"));
        TaskQuestionView->resize(400, 300);
        gridLayout = new QGridLayout(TaskQuestionView);
        gridLayout->setContentsMargins(3, 3, 3, 3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton = new QPushButton(TaskQuestionView);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(298, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        label = new QLabel(TaskQuestionView);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 2);


        retranslateUi(TaskQuestionView);

        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(TaskQuestionView);
    } // setupUi

    void retranslateUi(QWidget *TaskQuestionView)
    {
        TaskQuestionView->setWindowTitle(QApplication::translate("TaskQuestionView", "Form", 0));
        pushButton->setText(QApplication::translate("TaskQuestionView", "&\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217", 0));
        label->setText(QApplication::translate("TaskQuestionView", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class TaskQuestionView: public Ui_TaskQuestionView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKQUESTION_TASKVIEW_H
