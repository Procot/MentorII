/********************************************************************************
** Form generated from reading UI file 'taskgroup_taskcell.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKGROUP_TASKCELL_H
#define UI_TASKGROUP_TASKCELL_H

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

class Ui_TaskGroupCell
{
public:
    QGridLayout *gridLayout;
    QFrame *frame_2;
    QGridLayout *gridLayout_3;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QLabel *lblImage;
    QLabel *lblTitle;
    QLabel *lblDescription;

    void setupUi(QWidget *TaskGroupCell)
    {
        if (TaskGroupCell->objectName().isEmpty())
            TaskGroupCell->setObjectName(QStringLiteral("TaskGroupCell"));
        TaskGroupCell->resize(161, 69);
        TaskGroupCell->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(TaskGroupCell);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame_2 = new QFrame(TaskGroupCell);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_2);
        gridLayout_3->setContentsMargins(5, 5, 5, 5);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        frame = new QFrame(frame_2);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QStringLiteral("background-color: white;"));
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(15);
        gridLayout_2->setVerticalSpacing(3);
        gridLayout_2->setContentsMargins(15, -1, -1, -1);
        lblImage = new QLabel(frame);
        lblImage->setObjectName(QStringLiteral("lblImage"));
        lblImage->setMinimumSize(QSize(32, 32));
        lblImage->setMaximumSize(QSize(32, 32));
        lblImage->setPixmap(QPixmap(QString::fromUtf8(":/apps/folder.png")));
        lblImage->setScaledContents(true);

        gridLayout_2->addWidget(lblImage, 0, 0, 2, 1);

        lblTitle = new QLabel(frame);
        lblTitle->setObjectName(QStringLiteral("lblTitle"));
        lblTitle->setStyleSheet(QStringLiteral("font-size: 14pt;"));

        gridLayout_2->addWidget(lblTitle, 0, 1, 1, 1);

        lblDescription = new QLabel(frame);
        lblDescription->setObjectName(QStringLiteral("lblDescription"));
        lblDescription->setWordWrap(true);

        gridLayout_2->addWidget(lblDescription, 1, 1, 1, 1);


        gridLayout_3->addWidget(frame, 0, 0, 1, 1);


        gridLayout->addWidget(frame_2, 0, 0, 1, 1);


        retranslateUi(TaskGroupCell);

        QMetaObject::connectSlotsByName(TaskGroupCell);
    } // setupUi

    void retranslateUi(QWidget *TaskGroupCell)
    {
        TaskGroupCell->setWindowTitle(QApplication::translate("TaskGroupCell", "Form", 0));
        lblImage->setText(QString());
        lblTitle->setText(QApplication::translate("TaskGroupCell", "TextLabel", 0));
        lblDescription->setText(QApplication::translate("TaskGroupCell", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class TaskGroupCell: public Ui_TaskGroupCell {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKGROUP_TASKCELL_H
