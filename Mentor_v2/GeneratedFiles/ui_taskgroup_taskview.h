/********************************************************************************
** Form generated from reading UI file 'taskgroup_taskview.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKGROUP_TASKVIEW_H
#define UI_TASKGROUP_TASKVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskGroupView
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QFrame *frame;
    QGridLayout *gridLayout;
    QFrame *line_2;
    QToolButton *tbtUpLevel;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *tbtHelp;
    QFrame *line_8;
    QToolButton *tbtTry;
    QToolButton *tbtAbout;
    QToolButton *tbtAddSelected;
    QFrame *line_7;

    void setupUi(QWidget *TaskGroupView)
    {
        if (TaskGroupView->objectName().isEmpty())
            TaskGroupView->setObjectName(QStringLiteral("TaskGroupView"));
        TaskGroupView->resize(455, 355);
        TaskGroupView->setMinimumSize(QSize(325, 0));
        verticalLayout = new QVBoxLayout(TaskGroupView);
        verticalLayout->setSpacing(1);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableWidget = new QTableWidget(TaskGroupView);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget->setGridStyle(Qt::NoPen);

        verticalLayout->addWidget(tableWidget);

        frame = new QFrame(TaskGroupView);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(1);
        gridLayout->setContentsMargins(0, 0, 0, 1);
        line_2 = new QFrame(frame);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 0, 0, 1, 11);

        tbtUpLevel = new QToolButton(frame);
        tbtUpLevel->setObjectName(QStringLiteral("tbtUpLevel"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/ico/view-refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtUpLevel->setIcon(icon);
        tbtUpLevel->setIconSize(QSize(24, 24));
        tbtUpLevel->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        tbtUpLevel->setAutoRaise(true);

        gridLayout->addWidget(tbtUpLevel, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(473, 44, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 10, 1, 1);

        tbtHelp = new QToolButton(frame);
        tbtHelp->setObjectName(QStringLiteral("tbtHelp"));
        tbtHelp->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/ico/address-book-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtHelp->setIcon(icon1);
        tbtHelp->setIconSize(QSize(24, 24));
        tbtHelp->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        tbtHelp->setAutoRaise(true);

        gridLayout->addWidget(tbtHelp, 1, 4, 1, 1);

        line_8 = new QFrame(frame);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_8, 1, 2, 1, 1);

        tbtTry = new QToolButton(frame);
        tbtTry->setObjectName(QStringLiteral("tbtTry"));
        tbtTry->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/ico/edit-find.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtTry->setIcon(icon2);
        tbtTry->setIconSize(QSize(24, 24));
        tbtTry->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        tbtTry->setAutoRaise(true);

        gridLayout->addWidget(tbtTry, 1, 5, 1, 1);

        tbtAbout = new QToolButton(frame);
        tbtAbout->setObjectName(QStringLiteral("tbtAbout"));
        tbtAbout->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/ico/centrejust.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtAbout->setIcon(icon3);
        tbtAbout->setIconSize(QSize(24, 24));
        tbtAbout->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        tbtAbout->setAutoRaise(true);

        gridLayout->addWidget(tbtAbout, 1, 8, 1, 1);

        tbtAddSelected = new QToolButton(frame);
        tbtAddSelected->setObjectName(QStringLiteral("tbtAddSelected"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/ico/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtAddSelected->setIcon(icon4);
        tbtAddSelected->setIconSize(QSize(24, 24));
        tbtAddSelected->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        tbtAddSelected->setAutoRaise(true);

        gridLayout->addWidget(tbtAddSelected, 1, 3, 1, 1);

        line_7 = new QFrame(frame);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_7, 1, 7, 1, 1);


        verticalLayout->addWidget(frame);


        retranslateUi(TaskGroupView);

        QMetaObject::connectSlotsByName(TaskGroupView);
    } // setupUi

    void retranslateUi(QWidget *TaskGroupView)
    {
        TaskGroupView->setWindowTitle(QApplication::translate("TaskGroupView", "Form", 0));
        tbtUpLevel->setText(QApplication::translate("TaskGroupView", "\320\235\320\260\320\262\320\265\321\200\321\205", 0));
        tbtHelp->setText(QApplication::translate("TaskGroupView", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", 0));
        tbtTry->setText(QApplication::translate("TaskGroupView", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200", 0));
        tbtAbout->setText(QApplication::translate("TaskGroupView", "\320\220\320\262\321\202\320\276\321\200", 0));
        tbtAddSelected->setText(QApplication::translate("TaskGroupView", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class TaskGroupView: public Ui_TaskGroupView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKGROUP_TASKVIEW_H
