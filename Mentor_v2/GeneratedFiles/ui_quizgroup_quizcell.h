/********************************************************************************
** Form generated from reading UI file 'quizgroup_quizcell.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUIZGROUP_QUIZCELL_H
#define UI_QUIZGROUP_QUIZCELL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QuizGroupCell
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QLabel *lblImage;
    QLabel *lblTitle;
    QLabel *lblDescription;

    void setupUi(QFrame *QuizGroupCell)
    {
        if (QuizGroupCell->objectName().isEmpty())
            QuizGroupCell->setObjectName(QStringLiteral("QuizGroupCell"));
        QuizGroupCell->resize(161, 69);
        QuizGroupCell->setFrameShape(QFrame::NoFrame);
        QuizGroupCell->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(QuizGroupCell);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame_2 = new QFrame(QuizGroupCell);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setContentsMargins(5, 5, 5, 5);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
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


        gridLayout->addWidget(frame, 0, 0, 1, 1);


        verticalLayout->addWidget(frame_2);


        retranslateUi(QuizGroupCell);

        QMetaObject::connectSlotsByName(QuizGroupCell);
    } // setupUi

    void retranslateUi(QFrame *QuizGroupCell)
    {
        QuizGroupCell->setWindowTitle(QApplication::translate("QuizGroupCell", "Frame", 0));
        lblImage->setText(QString());
        lblTitle->setText(QApplication::translate("QuizGroupCell", "TextLabel", 0));
        lblDescription->setText(QApplication::translate("QuizGroupCell", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class QuizGroupCell: public Ui_QuizGroupCell {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUIZGROUP_QUIZCELL_H
