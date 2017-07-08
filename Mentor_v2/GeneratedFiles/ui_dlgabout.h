/********************************************************************************
** Form generated from reading UI file 'dlgabout.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGABOUT_H
#define UI_DLGABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dlgAbout
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_3;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_2;
    QFrame *line_2;
    QFrame *frame_2;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QFrame *line;
    QFrame *frame;
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *dlgAbout)
    {
        if (dlgAbout->objectName().isEmpty())
            dlgAbout->setObjectName(QStringLiteral("dlgAbout"));
        dlgAbout->resize(325, 196);
        verticalLayout = new QVBoxLayout(dlgAbout);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 2);
        frame_3 = new QFrame(dlgAbout);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setMinimumSize(QSize(0, 50));
        frame_3->setMaximumSize(QSize(16777215, 50));
        frame_3->setStyleSheet(QStringLiteral("background: palette(base);"));
        gridLayout_2 = new QGridLayout(frame_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(25, -1, -1, -1);
        label = new QLabel(frame_3);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(32, 32));
        label->setMaximumSize(QSize(32, 32));
        label->setPixmap(QPixmap(QString::fromUtf8(":/ico32/contact-new.png")));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 0, 1, 1, 1);


        verticalLayout->addWidget(frame_3);

        line_2 = new QFrame(dlgAbout);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShadow(QFrame::Raised);
        line_2->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line_2);

        frame_2 = new QFrame(dlgAbout);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3->setWordWrap(true);

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);


        verticalLayout->addWidget(frame_2);

        line = new QFrame(dlgAbout);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        frame = new QFrame(dlgAbout);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(0, 39));
        frame->setMaximumSize(QSize(16777215, 39));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(7, 5, 7, 5);
        buttonBox = new QDialogButtonBox(frame);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 0, 0, 1, 1);


        verticalLayout->addWidget(frame);


        retranslateUi(dlgAbout);

        QMetaObject::connectSlotsByName(dlgAbout);
    } // setupUi

    void retranslateUi(QDialog *dlgAbout)
    {
        dlgAbout->setWindowTitle(QApplication::translate("dlgAbout", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265 . . .", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("dlgAbout", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Mentor</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">  \320\222\320\265\321\200\321\201\320\270\321\217 2.0</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("dlgAbout", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Mentor II - \320\262\321\202\320\276\321\200\320\260\321\217 \320\262\320\265\321\200\321\201\320\270\321\217 \321\201\320\270\321\201\321\202\320\265\320\274\321\213 \320\234\320\265\320\275\321\202\320\276\321\200. \320\255\321\202\320\260 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \320\277\321\200\320\265\320\264\320\275\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\260 \320\264\320\273\321\217 \321\201\320\276\320\267\320\264\320\260\320\275\320\270\321\217 \320\272\320\276\320"
                        "\275\321\202\321\200\320\276\320\273\321\214\320\275\321\213\321\205 \320\270 \320\264\320\270\321\201\321\202\320\260\320\275\321\206\320\270\320\276\320\275\320\275\321\213\321\205 \321\202\320\265\321\201\321\202\320\276\320\262 \320\277\320\276 \320\273\320\270\320\275\320\265\320\271\320\275\320\276\320\271 \320\260\320\273\320\263\320\265\320\261\321\200\320\265, \320\274\320\260\321\202\320\265\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\276\320\274\321\203 \320\260\320\275\320\260\320\273\320\270\320\267\321\203 \320\270 \320\274\320\260\321\202\320\265\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\276\320\271 \321\204\320\270\320\267\320\270\320\272\320\265. \320\234\320\276\320\266\320\275\320\276 \320\273\320\265\320\263\320\272\320\276 \320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\320\276\320\264\320\264\320\265\321\200\320\266\320\272\321\203 \320\264\321\200\321\203\320\263\320\270\321\205 \320\277\321\200\320\265\320\264\320"
                        "\274\320\265\321\202\320\276\320\262 \320\277\321\203\321\202\320\265\320\274 \321\201\320\276\320\267\320\264\320\260\320\275\320\270\321\217 \320\264\320\276\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214\320\275\321\213\321\205 \320\274\320\276\320\264\321\203\320\273\320\265\320\271.</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class dlgAbout: public Ui_dlgAbout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGABOUT_H
