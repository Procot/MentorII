/********************************************************************************
** Form generated from reading UI file 'dlgnewgroup.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGNEWGROUP_H
#define UI_DLGNEWGROUP_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dlgNewGroup
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label;
    QFrame *line;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QSpacerItem *verticalSpacer;
    QFrame *line_2;
    QFrame *frame_3;
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *dlgNewGroup)
    {
        if (dlgNewGroup->objectName().isEmpty())
            dlgNewGroup->setObjectName(QStringLiteral("dlgNewGroup"));
        dlgNewGroup->resize(280, 256);
        verticalLayout = new QVBoxLayout(dlgNewGroup);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(1, 0, 0, 0);
        frame = new QFrame(dlgNewGroup);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setStyleSheet(QLatin1String("border: none;\n"
"background-color: palette(base);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(15);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(25, -1, -1, -1);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(32, 32));
        label_2->setMaximumSize(QSize(32, 32));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/apps/ooo-template.png")));
        label_2->setScaledContents(true);

        horizontalLayout->addWidget(label_2);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);


        verticalLayout->addWidget(frame);

        line = new QFrame(dlgNewGroup);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShadow(QFrame::Raised);
        line->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line);

        frame_2 = new QFrame(dlgNewGroup);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        lineEdit = new QLineEdit(frame_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 0, 1, 1, 1);

        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(frame_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout_2->addWidget(lineEdit_2, 1, 1, 1, 1);

        groupBox = new QGroupBox(frame_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout_2->addWidget(checkBox);

        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        verticalLayout_2->addWidget(checkBox_2);


        gridLayout_2->addWidget(groupBox, 2, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 0, 1, 2);


        verticalLayout->addWidget(frame_2);

        line_2 = new QFrame(dlgNewGroup);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        frame_3 = new QFrame(dlgNewGroup);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setMinimumSize(QSize(0, 47));
        frame_3->setMaximumSize(QSize(16777215, 47));
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(frame_3);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 0, 0, 1, 1);


        verticalLayout->addWidget(frame_3);


        retranslateUi(dlgNewGroup);
        QObject::connect(buttonBox, SIGNAL(accepted()), dlgNewGroup, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), dlgNewGroup, SLOT(reject()));

        QMetaObject::connectSlotsByName(dlgNewGroup);
    } // setupUi

    void retranslateUi(QDialog *dlgNewGroup)
    {
        dlgNewGroup->setWindowTitle(QApplication::translate("dlgNewGroup", "\320\241\320\276\320\267\320\264\320\260\320\275\320\270\320\265 \320\263\321\200\321\203\320\277\320\277\321\213", 0));
        label_2->setText(QString());
        label->setText(QApplication::translate("dlgNewGroup", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">\320\235\320\276\320\262\320\260\321\217 \320\263\321\200\321\203\320\277\320\277\320\260</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("dlgNewGroup", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265:", 0));
        label_4->setText(QApplication::translate("dlgNewGroup", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265:", 0));
        groupBox->setTitle(QApplication::translate("dlgNewGroup", " \320\244\320\270\320\273\321\214\321\202\321\200\321\213 ", 0));
        checkBox->setText(QApplication::translate("dlgNewGroup", "\320\241\320\273\321\203\321\207\320\260\320\271\320\275\321\213\320\271 \320\262\321\213\320\261\320\276\321\200 \320\276\320\264\320\275\320\276\320\271 \320\267\320\260\320\264\320\260\321\207\320\270", 0));
        checkBox_2->setText(QApplication::translate("dlgNewGroup", "\320\237\320\265\321\200\320\265\320\274\320\265\321\210\320\260\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\320\270", 0));
    } // retranslateUi

};

namespace Ui {
    class dlgNewGroup: public Ui_dlgNewGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGNEWGROUP_H
