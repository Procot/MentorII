/********************************************************************************
** Form generated from reading UI file 'quizgroup_dlgproperties.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUIZGROUP_DLGPROPERTIES_H
#define UI_QUIZGROUP_DLGPROPERTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dlgQuizGroupProperties
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QFrame *line_2;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *linTitle;
    QLabel *label_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QCheckBox *chkRandom;
    QCheckBox *chkShuffle;
    QFrame *line;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_3;
    QDialogButtonBox *btnbox;

    void setupUi(QDialog *dlgQuizGroupProperties)
    {
        if (dlgQuizGroupProperties->objectName().isEmpty())
            dlgQuizGroupProperties->setObjectName(QStringLiteral("dlgQuizGroupProperties"));
        dlgQuizGroupProperties->resize(264, 208);
        verticalLayout = new QVBoxLayout(dlgQuizGroupProperties);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 1);
        frame_3 = new QFrame(dlgQuizGroupProperties);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        frame_3->setStyleSheet(QLatin1String("border: none;\n"
"background: white;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_3);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(15, -1, -1, -1);
        label = new QLabel(frame_3);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(32, 32));
        label->setMaximumSize(QSize(32, 32));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/apps/gthumb.png")));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);


        verticalLayout->addWidget(frame_3);

        line_2 = new QFrame(dlgQuizGroupProperties);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShadow(QFrame::Raised);
        line_2->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line_2);

        frame_2 = new QFrame(dlgQuizGroupProperties);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy1);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        linTitle = new QLineEdit(frame_2);
        linTitle->setObjectName(QStringLiteral("linTitle"));

        gridLayout->addWidget(linTitle, 0, 1, 1, 1);

        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        groupBox = new QGroupBox(frame_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        chkRandom = new QCheckBox(groupBox);
        chkRandom->setObjectName(QStringLiteral("chkRandom"));

        gridLayout_2->addWidget(chkRandom, 0, 0, 1, 1);

        chkShuffle = new QCheckBox(groupBox);
        chkShuffle->setObjectName(QStringLiteral("chkShuffle"));

        gridLayout_2->addWidget(chkShuffle, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox, 1, 1, 1, 1);


        verticalLayout->addWidget(frame_2);

        line = new QFrame(dlgQuizGroupProperties);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShadow(QFrame::Sunken);
        line->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line);

        frame_4 = new QFrame(dlgQuizGroupProperties);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        sizePolicy.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_4);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        btnbox = new QDialogButtonBox(frame_4);
        btnbox->setObjectName(QStringLiteral("btnbox"));
        btnbox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_3->addWidget(btnbox);


        verticalLayout->addWidget(frame_4);


        retranslateUi(dlgQuizGroupProperties);

        QMetaObject::connectSlotsByName(dlgQuizGroupProperties);
    } // setupUi

    void retranslateUi(QDialog *dlgQuizGroupProperties)
    {
        dlgQuizGroupProperties->setWindowTitle(QApplication::translate("dlgQuizGroupProperties", "Dialog", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("dlgQuizGroupProperties", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">\320\241\320\262\320\276\320\271\321\201\321\202\320\262\320\260 \320\263\321\200\321\203\320\277\320\277\321\213</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("dlgQuizGroupProperties", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265:", 0));
        label_5->setText(QApplication::translate("dlgQuizGroupProperties", "\320\244\320\270\320\273\321\214\321\202\321\200\321\213:", 0));
        groupBox->setTitle(QString());
        chkRandom->setText(QApplication::translate("dlgQuizGroupProperties", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \320\276\320\264\320\275\320\276", 0));
        chkShuffle->setText(QApplication::translate("dlgQuizGroupProperties", "\320\237\320\265\321\200\320\265\320\274\320\265\321\210\320\260\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class dlgQuizGroupProperties: public Ui_dlgQuizGroupProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUIZGROUP_DLGPROPERTIES_H
