/********************************************************************************
** Form generated from reading UI file 'dlgvariant.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGVARIANT_H
#define UI_DLGVARIANT_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dlgVariant
{
public:
    QGridLayout *gridLayout;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QFrame *line_2;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QWebView *webView;
    QFrame *line;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnRegenerate;
    QSpacerItem *horizontalSpacer;
    QCheckBox *chkViewTestAnswers;
    QCheckBox *chkViewSolutions;
    QPushButton *btnUpdateView;
    QPushButton *btnClose;

    void setupUi(QDialog *dlgVariant)
    {
        if (dlgVariant->objectName().isEmpty())
            dlgVariant->setObjectName(QStringLiteral("dlgVariant"));
        dlgVariant->resize(666, 491);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/apps/accessories-archiver.png"), QSize(), QIcon::Normal, QIcon::Off);
        dlgVariant->setWindowIcon(icon);
        gridLayout = new QGridLayout(dlgVariant);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 1);
        frame_3 = new QFrame(dlgVariant);
        frame_3->setObjectName(QStringLiteral("frame_3"));
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
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/apps/email.png")));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);


        gridLayout->addWidget(frame_3, 0, 0, 1, 1);

        line_2 = new QFrame(dlgVariant);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShadow(QFrame::Raised);
        line_2->setFrameShape(QFrame::HLine);

        gridLayout->addWidget(line_2, 1, 0, 1, 1);

        frame_2 = new QFrame(dlgVariant);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Sunken);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        webView = new QWebView(frame_2);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setRenderHints(QPainter::Antialiasing|QPainter::HighQualityAntialiasing|QPainter::NonCosmeticDefaultPen|QPainter::SmoothPixmapTransform|QPainter::TextAntialiasing);

        verticalLayout_2->addWidget(webView);


        gridLayout->addWidget(frame_2, 2, 0, 1, 1);

        line = new QFrame(dlgVariant);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShadow(QFrame::Sunken);
        line->setFrameShape(QFrame::HLine);

        gridLayout->addWidget(line, 3, 0, 1, 1);

        frame = new QFrame(dlgVariant);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
#ifndef Q_OS_MAC
        horizontalLayout_2->setContentsMargins(9, 9, 9, 9);
#endif
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btnRegenerate = new QPushButton(frame);
        btnRegenerate->setObjectName(QStringLiteral("btnRegenerate"));

        horizontalLayout_2->addWidget(btnRegenerate);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        chkViewTestAnswers = new QCheckBox(frame);
        chkViewTestAnswers->setObjectName(QStringLiteral("chkViewTestAnswers"));
        chkViewTestAnswers->setChecked(true);

        horizontalLayout_2->addWidget(chkViewTestAnswers);

        chkViewSolutions = new QCheckBox(frame);
        chkViewSolutions->setObjectName(QStringLiteral("chkViewSolutions"));
        chkViewSolutions->setChecked(true);

        horizontalLayout_2->addWidget(chkViewSolutions);

        btnUpdateView = new QPushButton(frame);
        btnUpdateView->setObjectName(QStringLiteral("btnUpdateView"));

        horizontalLayout_2->addWidget(btnUpdateView);

        btnClose = new QPushButton(frame);
        btnClose->setObjectName(QStringLiteral("btnClose"));

        horizontalLayout_2->addWidget(btnClose);


        gridLayout->addWidget(frame, 4, 0, 1, 1);


        retranslateUi(dlgVariant);

        btnUpdateView->setDefault(true);


        QMetaObject::connectSlotsByName(dlgVariant);
    } // setupUi

    void retranslateUi(QDialog *dlgVariant)
    {
        dlgVariant->setWindowTitle(QApplication::translate("dlgVariant", "Dialog", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("dlgVariant", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200 \320\262\320\260\321\200\320\270\320\260\320\275\321\202\320\260</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\222\321\213 \320\274\320\276\320\266\320\265\321\202\320\265 \320\276\321\202\320\272\321\200\321\213\321\202\321\214 \320\275\320\265\321\201\320\272\320\276\320\273\321\214\320\272\320\276 \321\202\320\260\320\272\320\270\321\205 \320\276"
                        "\320\272\320\276\320\275</p></body></html>", 0));
        btnRegenerate->setText(QApplication::translate("dlgVariant", "\320\237\320\265\321\200\320\265\320\263\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214", 0));
        chkViewTestAnswers->setText(QApplication::translate("dlgVariant", "\320\242\320\265\321\201\321\202\321\213", 0));
        chkViewSolutions->setText(QApplication::translate("dlgVariant", "\320\240\320\265\321\210\320\265\320\275\320\270\321\217", 0));
        btnUpdateView->setText(QApplication::translate("dlgVariant", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", 0));
        btnClose->setText(QApplication::translate("dlgVariant", "&\320\227\320\260\320\272\321\200\321\213\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class dlgVariant: public Ui_dlgVariant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGVARIANT_H
