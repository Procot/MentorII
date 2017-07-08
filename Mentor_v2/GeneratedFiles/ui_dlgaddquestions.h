/********************************************************************************
** Form generated from reading UI file 'dlgaddquestions.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGADDQUESTIONS_H
#define UI_DLGADDQUESTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dlgAddQuestions
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_3;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLabel *label_4;
    QFrame *line_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QCheckBox *chkRandom;
    QLabel *label_2;
    QLineEdit *linName;
    QLabel *label;
    QFrame *line;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnNoGroup;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *dlgAddQuestions)
    {
        if (dlgAddQuestions->objectName().isEmpty())
            dlgAddQuestions->setObjectName(QStringLiteral("dlgAddQuestions"));
        dlgAddQuestions->resize(465, 239);
        verticalLayout = new QVBoxLayout(dlgAddQuestions);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(1, 0, 0, 0);
        frame_3 = new QFrame(dlgAddQuestions);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setMinimumSize(QSize(0, 50));
        frame_3->setMaximumSize(QSize(16777215, 50));
        frame_3->setStyleSheet(QStringLiteral("background: palette(base);"));
        gridLayout_2 = new QGridLayout(frame_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(25, -1, -1, -1);
        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(32, 32));
        label_3->setMaximumSize(QSize(32, 32));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/ico32/contact-new.png")));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 0, 1, 1, 1);


        verticalLayout->addWidget(frame_3);

        line_2 = new QFrame(dlgAddQuestions);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShadow(QFrame::Raised);
        line_2->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line_2);

        frame = new QFrame(dlgAddQuestions);
        frame->setObjectName(QStringLiteral("frame"));
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(15);
        chkRandom = new QCheckBox(frame);
        chkRandom->setObjectName(QStringLiteral("chkRandom"));
        chkRandom->setChecked(true);

        gridLayout->addWidget(chkRandom, 3, 1, 1, 2);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        linName = new QLineEdit(frame);
        linName->setObjectName(QStringLiteral("linName"));

        gridLayout->addWidget(linName, 2, 1, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);


        verticalLayout->addWidget(frame);

        line = new QFrame(dlgAddQuestions);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        frame_2 = new QFrame(dlgAddQuestions);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnNoGroup = new QPushButton(frame_2);
        btnNoGroup->setObjectName(QStringLiteral("btnNoGroup"));

        horizontalLayout->addWidget(btnNoGroup);

        buttonBox = new QDialogButtonBox(frame_2);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addWidget(frame_2);

        QWidget::setTabOrder(linName, chkRandom);
        QWidget::setTabOrder(chkRandom, buttonBox);

        retranslateUi(dlgAddQuestions);

        QMetaObject::connectSlotsByName(dlgAddQuestions);
    } // setupUi

    void retranslateUi(QDialog *dlgAddQuestions)
    {
        dlgAddQuestions->setWindowTitle(QApplication::translate("dlgAddQuestions", "Dialog", 0));
        label_3->setText(QString());
        label_4->setText(QApplication::translate("dlgAddQuestions", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\267\320\260\320\264\320\260\320\275\320\270\320\271</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\320\262 \320\272\320\276\320\275\321\202\321\200\320\276\320\273\321\214\320\275\321\203\321\216 \321\200\320\260\320\261\320\276\321\202\321\203</span></p></body></html>", 0));
        chkRandom->setText(QApplication::translate("dlgAddQuestions", "\320\222\321\213\320\261\320\270\321\200\320\260\321\202\321\214 \321\202\320\276\320\273\321\214\320\272\320\276 \320\276\320\264\320\275\320\276 \320\267\320\260\320\264\320\260\320\275\320\270\320\265", 0));
        label_2->setText(QApplication::translate("dlgAddQuestions", "\320\222\321\213\320\261\321\200\320\260\320\275\320\275\321\213\320\265 \320\262\320\260\320\274\320\270 \320\267\320\260\320\264\320\260\320\275\320\270\321\217 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\276\320\261\321\212\320\265\320\264\320\270\320\275\321\217\321\216\321\202\321\201\321\217 \320\262 \320\263\321\200\321\203\320\277\320\277\321\203, \320\270\320\267 \320\272\320\276\321\202\320\276\321\200\320\276\320\271 \320\261\321\203\320\264\320\265\321\202 \320\262\321\213\320\261\321\200\320\260\320\275\320\276 \320\273\320\270\321\210\321\214 \320\276\320\264\320\275\320\276 \320\270\320\267 \320\262\321\201\320\265\321\205 \320\267\320\260\320\264\320\260\320\275\320\270\320\271 \320\275\320\260\320\261\320\276\321\200\320\260 (\321\201\320\273\321\203\321\207\320\260\320\271\320\275\321\213\320\274 \320\276\320\261\321\200\320\260\320\267\320\276\320\274). \320\225\321\201\320\273\320\270 \320\262\321\213 \320\275\320\265 \321\205\320\276\321\202"
                        "\320\270\321\202\320\265 \321\201\320\276\320\267\320\264\320\260\320\262\320\260\321\202\321\214 \320\263\321\200\321\203\320\277\320\277\321\203 \320\270 \320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\264\320\260\320\275\320\270\321\217 \320\275\320\260\320\277\321\200\321\217\320\274\321\203\321\216 \320\262 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\320\276\320\265 \320\274\320\265\321\201\321\202\320\276, \320\275\320\260\320\266\320\274\320\270\321\202\320\265 \"\320\221\320\265\320\267 \321\201\320\276\320\267\320\264\320\260\320\275\320\270\321\217 \320\263\321\200\321\203\320\277\320\277\321\213\".", 0));
        linName->setText(QApplication::translate("dlgAddQuestions", "\320\230\320\274\321\217 \320\263\321\200\321\203\320\277\320\277\321\213", 0));
        label->setText(QApplication::translate("dlgAddQuestions", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265:", 0));
        btnNoGroup->setText(QApplication::translate("dlgAddQuestions", "\320\221\320\265\320\267 \321\201\320\276\320\267\320\264\320\260\320\275\320\270\321\217 \320\263\321\200\321\203\320\277\320\277\321\213", 0));
    } // retranslateUi

};

namespace Ui {
    class dlgAddQuestions: public Ui_dlgAddQuestions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGADDQUESTIONS_H
