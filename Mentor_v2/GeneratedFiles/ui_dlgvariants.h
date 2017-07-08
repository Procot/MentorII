/********************************************************************************
** Form generated from reading UI file 'dlgvariants.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGVARIANTS_H
#define UI_DLGVARIANTS_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dlgVariants
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnWebTests;
    QPushButton *btnPrintSelected;
    QCheckBox *chkPrintSolutions;
    QDialogButtonBox *btnbox;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QFrame *line_2;
    QFrame *line;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_5;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QSpinBox *spnGroups;
    QLabel *label_4;
    QSpinBox *spnVariants;
    QPushButton *btnGenerate;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_5;
    QLabel *label_6;
    QTableWidget *tblVariants;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnSelectAll;
    QPushButton *btnSelectNone;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnViewVariant;

    void setupUi(QDialog *dlgVariants)
    {
        if (dlgVariants->objectName().isEmpty())
            dlgVariants->setObjectName(QStringLiteral("dlgVariants"));
        dlgVariants->resize(440, 515);
        gridLayout_2 = new QGridLayout(dlgVariants);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 1);
        frame_4 = new QFrame(dlgVariants);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_4);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        btnWebTests = new QPushButton(frame_4);
        btnWebTests->setObjectName(QStringLiteral("btnWebTests"));

        horizontalLayout_3->addWidget(btnWebTests);

        btnPrintSelected = new QPushButton(frame_4);
        btnPrintSelected->setObjectName(QStringLiteral("btnPrintSelected"));

        horizontalLayout_3->addWidget(btnPrintSelected);

        chkPrintSolutions = new QCheckBox(frame_4);
        chkPrintSolutions->setObjectName(QStringLiteral("chkPrintSolutions"));

        horizontalLayout_3->addWidget(chkPrintSolutions);

        btnbox = new QDialogButtonBox(frame_4);
        btnbox->setObjectName(QStringLiteral("btnbox"));
        btnbox->setStandardButtons(QDialogButtonBox::Ok);

        horizontalLayout_3->addWidget(btnbox);


        gridLayout_2->addWidget(frame_4, 4, 0, 1, 1);

        frame_3 = new QFrame(dlgVariants);
        frame_3->setObjectName(QStringLiteral("frame_3"));
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


        gridLayout_2->addWidget(frame_3, 0, 0, 1, 1);

        line_2 = new QFrame(dlgVariants);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShadow(QFrame::Raised);
        line_2->setFrameShape(QFrame::HLine);

        gridLayout_2->addWidget(line_2, 1, 0, 1, 1);

        line = new QFrame(dlgVariants);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShadow(QFrame::Sunken);
        line->setFrameShape(QFrame::HLine);

        gridLayout_2->addWidget(line, 3, 0, 1, 1);

        frame_2 = new QFrame(dlgVariants);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy1);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(9, 0, 9, 0);
        frame_5 = new QFrame(frame_2);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_5);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(frame_5);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        spnGroups = new QSpinBox(frame_5);
        spnGroups->setObjectName(QStringLiteral("spnGroups"));
        spnGroups->setMinimum(1);
        spnGroups->setValue(7);

        gridLayout->addWidget(spnGroups, 2, 1, 1, 1);

        label_4 = new QLabel(frame_5);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 2, 1, 1);

        spnVariants = new QSpinBox(frame_5);
        spnVariants->setObjectName(QStringLiteral("spnVariants"));
        spnVariants->setMinimum(1);
        spnVariants->setValue(25);

        gridLayout->addWidget(spnVariants, 2, 3, 1, 1);

        btnGenerate = new QPushButton(frame_5);
        btnGenerate->setObjectName(QStringLiteral("btnGenerate"));

        gridLayout->addWidget(btnGenerate, 2, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(53, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 5, 1, 1);

        label_5 = new QLabel(frame_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setWordWrap(true);

        gridLayout->addWidget(label_5, 0, 0, 1, 6);

        label_6 = new QLabel(frame_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setWordWrap(true);

        gridLayout->addWidget(label_6, 1, 0, 1, 6);


        verticalLayout_2->addWidget(frame_5);

        tblVariants = new QTableWidget(frame_2);
        if (tblVariants->columnCount() < 4)
            tblVariants->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tblVariants->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tblVariants->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tblVariants->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tblVariants->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tblVariants->rowCount() < 5)
            tblVariants->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tblVariants->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tblVariants->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tblVariants->setVerticalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tblVariants->setVerticalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tblVariants->setVerticalHeaderItem(4, __qtablewidgetitem8);
        tblVariants->setObjectName(QStringLiteral("tblVariants"));
        tblVariants->horizontalHeader()->setDefaultSectionSize(22);
        tblVariants->horizontalHeader()->setMinimumSectionSize(19);
        tblVariants->verticalHeader()->setDefaultSectionSize(25);

        verticalLayout_2->addWidget(tblVariants);

        frame = new QFrame(frame_2);
        frame->setObjectName(QStringLiteral("frame"));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 9, 0, 9);
        btnSelectAll = new QPushButton(frame);
        btnSelectAll->setObjectName(QStringLiteral("btnSelectAll"));

        horizontalLayout_2->addWidget(btnSelectAll);

        btnSelectNone = new QPushButton(frame);
        btnSelectNone->setObjectName(QStringLiteral("btnSelectNone"));

        horizontalLayout_2->addWidget(btnSelectNone);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnViewVariant = new QPushButton(frame);
        btnViewVariant->setObjectName(QStringLiteral("btnViewVariant"));

        horizontalLayout_2->addWidget(btnViewVariant);


        verticalLayout_2->addWidget(frame);


        gridLayout_2->addWidget(frame_2, 2, 0, 1, 1);


        retranslateUi(dlgVariants);

        btnGenerate->setDefault(true);


        QMetaObject::connectSlotsByName(dlgVariants);
    } // setupUi

    void retranslateUi(QDialog *dlgVariants)
    {
        dlgVariants->setWindowTitle(QApplication::translate("dlgVariants", "\320\222\320\260\321\200\320\270\320\260\320\275\321\202\321\213", 0));
        btnWebTests->setText(QApplication::translate("dlgVariants", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\202\320\265\321\201\321\202\321\213", 0));
        btnPrintSelected->setText(QApplication::translate("dlgVariants", "\320\237\320\265\321\207\320\260\321\202\321\214 \320\262\321\213\320\264\320\265\320\273\320\265\320\275\320\275\321\213\321\205...", 0));
        chkPrintSolutions->setText(QApplication::translate("dlgVariants", "\320\237\320\265\321\207\320\260\321\202\321\214 \321\200\320\265\321\210\320\265\320\275\320\270\320\271", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("dlgVariants", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">\320\222\320\260\321\200\320\270\320\260\320\275\321\202\321\213 \320\267\320\260\320\264\320\260\320\275\320\270\320\271</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("dlgVariants", "\320\223\321\200\321\203\320\277\320\277:", 0));
        label_4->setText(QApplication::translate("dlgVariants", "\320\222\320\260\321\200.:", 0));
        btnGenerate->setText(QApplication::translate("dlgVariants", "\320\241\320\263\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\262\320\260\321\200\320\270\320\260\320\275\321\202\321\213", 0));
        label_5->setText(QApplication::translate("dlgVariants", "      \320\237\320\276\320\274\320\275\320\270\321\202\320\265, \321\207\321\202\320\276 \320\277\321\200\320\270 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\270 \321\201\321\202\321\200\321\203\320\272\321\202\321\203\321\200\321\213 \320\272\320\276\320\275\321\202\321\200\320\276\320\273\321\214\320\275\320\276\320\271 \320\263\320\265\320\275\320\265\321\200\320\260\321\206\320\270\321\216 \320\262\320\260\321\200\320\270\320\260\320\275\321\202\320\276\320\262 \320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\320\276 \320\277\320\276\320\262\321\202\320\276\321\200\320\270\321\202\321\214, \321\207\321\202\320\276\320\261\321\213 \320\276\320\275\320\260 \321\201\320\276\320\276\321\202\320\262\320\265\321\202\321\201\321\202\320\262\320\276\320\262\320\260\320\273\320\260 \320\275\320\276\320\262\320\276\320\271 \321\201\321\202\321\200\321\203\320\272\321\202\321\203\321\200\320\265.", 0));
        label_6->setText(QApplication::translate("dlgVariants", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">     \320\247\321\202\320\276\320\261\321\213 \320\275\320\260\320\277\320\265\321\207\320\260\321\202\320\260\321\202\321\214 \320\262\320\260\321\200\320\270\320\260\320\275\321\202\321\213 \321\202\320\276\320\273\321\214\320\272\320\276 \320\264\320\273\321\217 \320\276\320\264\320\275\320\276\320\271 \320\263\321\200\321\203\320\277\320\277\321\213, \320\270\320\273\320\270 \321\201 \320\276\320\264\320\275\320\270\320\274 \320\275\320\276\320\274\320\265\321\200\320\276\320\274, \320\262\321\213\320\264\320\265\320\273"
                        "\320\270\321\202\320\265 \320\272\320\276\320\273\320\276\320\275\320\272\321\203 \320\270\320\273\320\270 \321\201\321\202\321\200\320\276\320\272\321\203 \321\201 \320\277\320\276\320\274\320\276\321\211\321\214\321\216 \320\276\320\264\320\270\320\275\320\260\321\200\320\275\320\276\320\263\320\276 \321\211\320\265\320\273\321\207\320\272\320\260 \320\277\320\276 \320\270\321\205 \320\267\320\260\320\263\320\276\320\273\320\276\320\262\320\272\321\203. \320\222\321\213 \320\274\320\276\320\266\320\265\321\202\320\265 \320\276\320\261\321\212\320\265\320\264\320\270\320\275\321\217\321\202\321\214 \320\262\321\213\320\264\320\265\320\273\320\265\320\275\320\270\321\217, \320\267\320\260\320\266\320\260\320\262 \320\272\320\273\320\260\320\262\320\270\321\210\321\203 Ctrl.</span></p></body></html>", 0));
        QTableWidgetItem *___qtablewidgetitem = tblVariants->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("dlgVariants", "1", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tblVariants->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("dlgVariants", "2", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tblVariants->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("dlgVariants", "3", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tblVariants->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("dlgVariants", "4", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tblVariants->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("dlgVariants", "1", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tblVariants->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("dlgVariants", "2", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tblVariants->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("dlgVariants", "2", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tblVariants->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("dlgVariants", "3", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tblVariants->verticalHeaderItem(4);
        ___qtablewidgetitem8->setText(QApplication::translate("dlgVariants", "5", 0));
        btnSelectAll->setText(QApplication::translate("dlgVariants", "\320\222\321\213\320\264\320\265\320\273\320\270\321\202\321\214 \320\262\321\201\320\265", 0));
        btnSelectNone->setText(QApplication::translate("dlgVariants", "\320\241\320\275\321\217\321\202\321\214 \320\262\321\213\320\264\320\265\320\273\320\265\320\275\320\270\320\265", 0));
        btnViewVariant->setText(QApplication::translate("dlgVariants", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200", 0));
    } // retranslateUi

};

namespace Ui {
    class dlgVariants: public Ui_dlgVariants {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGVARIANTS_H
