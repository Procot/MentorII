/********************************************************************************
** Form generated from reading UI file 'quizgroup_quiznodeview.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUIZGROUP_QUIZNODEVIEW_H
#define UI_QUIZGROUP_QUIZNODEVIEW_H

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

QT_BEGIN_NAMESPACE

class Ui_QuizGroupView
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *table;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QFrame *line;
    QSpacerItem *horizontalSpacer;
    QToolButton *tbtMoveUp;
    QToolButton *tbtMoveDown;
    QFrame *line_3;
    QToolButton *tbtUpLevel;
    QFrame *line_6;
    QToolButton *tbtProperties;
    QToolButton *tbtRemove;
    QToolButton *tbtAddRandom;
    QToolButton *tbtAddShuffle;

    void setupUi(QFrame *QuizGroupView)
    {
        if (QuizGroupView->objectName().isEmpty())
            QuizGroupView->setObjectName(QStringLiteral("QuizGroupView"));
        QuizGroupView->resize(360, 354);
        QuizGroupView->setMinimumSize(QSize(360, 0));
        QuizGroupView->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(QuizGroupView);
        verticalLayout->setSpacing(1);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        table = new QTableWidget(QuizGroupView);
        table->setObjectName(QStringLiteral("table"));
        table->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        table->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        table->setGridStyle(Qt::NoPen);

        verticalLayout->addWidget(table);

        frame_2 = new QFrame(QuizGroupView);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(1);
        gridLayout_2->setContentsMargins(0, 0, 0, 1);
        line = new QFrame(frame_2);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 0, 0, 1, 15);

        horizontalSpacer = new QSpacerItem(7, 44, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 14, 1, 1);

        tbtMoveUp = new QToolButton(frame_2);
        tbtMoveUp->setObjectName(QStringLiteral("tbtMoveUp"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/ico/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtMoveUp->setIcon(icon);
        tbtMoveUp->setIconSize(QSize(24, 24));
        tbtMoveUp->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        tbtMoveUp->setAutoRaise(true);

        gridLayout_2->addWidget(tbtMoveUp, 1, 8, 1, 1);

        tbtMoveDown = new QToolButton(frame_2);
        tbtMoveDown->setObjectName(QStringLiteral("tbtMoveDown"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/ico/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtMoveDown->setIcon(icon1);
        tbtMoveDown->setIconSize(QSize(24, 24));
        tbtMoveDown->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        tbtMoveDown->setAutoRaise(true);

        gridLayout_2->addWidget(tbtMoveDown, 1, 9, 1, 1);

        line_3 = new QFrame(frame_2);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_3, 1, 6, 1, 1);

        tbtUpLevel = new QToolButton(frame_2);
        tbtUpLevel->setObjectName(QStringLiteral("tbtUpLevel"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/ico/view-refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtUpLevel->setIcon(icon2);
        tbtUpLevel->setIconSize(QSize(24, 24));
        tbtUpLevel->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        tbtUpLevel->setAutoRaise(true);

        gridLayout_2->addWidget(tbtUpLevel, 1, 0, 1, 1);

        line_6 = new QFrame(frame_2);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_6, 1, 1, 1, 1);

        tbtProperties = new QToolButton(frame_2);
        tbtProperties->setObjectName(QStringLiteral("tbtProperties"));
        tbtProperties->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/ico/edit-find-replace.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtProperties->setIcon(icon3);
        tbtProperties->setIconSize(QSize(24, 24));
        tbtProperties->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        tbtProperties->setAutoRaise(true);

        gridLayout_2->addWidget(tbtProperties, 1, 7, 1, 1);

        tbtRemove = new QToolButton(frame_2);
        tbtRemove->setObjectName(QStringLiteral("tbtRemove"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/ico/edit-delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtRemove->setIcon(icon4);
        tbtRemove->setIconSize(QSize(24, 24));
        tbtRemove->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        tbtRemove->setAutoRaise(true);

        gridLayout_2->addWidget(tbtRemove, 1, 10, 1, 1);

        tbtAddRandom = new QToolButton(frame_2);
        tbtAddRandom->setObjectName(QStringLiteral("tbtAddRandom"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/ico/bookmark-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtAddRandom->setIcon(icon5);
        tbtAddRandom->setIconSize(QSize(24, 24));
        tbtAddRandom->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        tbtAddRandom->setAutoRaise(true);

        gridLayout_2->addWidget(tbtAddRandom, 1, 4, 1, 1);

        tbtAddShuffle = new QToolButton(frame_2);
        tbtAddShuffle->setObjectName(QStringLiteral("tbtAddShuffle"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/ico/contact-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtAddShuffle->setIcon(icon6);
        tbtAddShuffle->setIconSize(QSize(24, 24));
        tbtAddShuffle->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        tbtAddShuffle->setAutoRaise(true);

        gridLayout_2->addWidget(tbtAddShuffle, 1, 5, 1, 1);


        verticalLayout->addWidget(frame_2);


        retranslateUi(QuizGroupView);

        QMetaObject::connectSlotsByName(QuizGroupView);
    } // setupUi

    void retranslateUi(QFrame *QuizGroupView)
    {
        QuizGroupView->setWindowTitle(QApplication::translate("QuizGroupView", "Frame", 0));
        tbtMoveUp->setText(QApplication::translate("QuizGroupView", "\320\222\321\213\321\210\320\265", 0));
        tbtMoveDown->setText(QApplication::translate("QuizGroupView", "\320\235\320\270\320\266\320\265", 0));
        tbtUpLevel->setText(QApplication::translate("QuizGroupView", "\320\235\320\260\320\262\320\265\321\200\321\205", 0));
        tbtProperties->setText(QApplication::translate("QuizGroupView", "\320\241\320\262\320\276\320\271\321\201\321\202\320\262\320\260", 0));
        tbtRemove->setText(QApplication::translate("QuizGroupView", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0));
        tbtAddRandom->setText(QApplication::translate("QuizGroupView", "\320\222\321\213\320\261\320\276\321\200", 0));
        tbtAddShuffle->setText(QApplication::translate("QuizGroupView", "\320\237\320\265\321\200\320\265\320\274.", 0));
    } // retranslateUi

};

namespace Ui {
    class QuizGroupView: public Ui_QuizGroupView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUIZGROUP_QUIZNODEVIEW_H
