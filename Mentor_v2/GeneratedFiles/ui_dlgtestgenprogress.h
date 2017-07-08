/********************************************************************************
** Form generated from reading UI file 'dlgtestgenprogress.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGTESTGENPROGRESS_H
#define UI_DLGTESTGENPROGRESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_dlgTestGenProgress
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QProgressBar *prbProgress;
    QFrame *line;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCancel;

    void setupUi(QDialog *dlgTestGenProgress)
    {
        if (dlgTestGenProgress->objectName().isEmpty())
            dlgTestGenProgress->setObjectName(QStringLiteral("dlgTestGenProgress"));
        dlgTestGenProgress->resize(302, 98);
        gridLayout = new QGridLayout(dlgTestGenProgress);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(dlgTestGenProgress);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(32, 32));
        label->setMaximumSize(QSize(32, 32));
        label->setPixmap(QPixmap(QString::fromUtf8(":/ico32/contact-new.png")));

        gridLayout->addWidget(label, 0, 0, 2, 1);

        label_2 = new QLabel(dlgTestGenProgress);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        prbProgress = new QProgressBar(dlgTestGenProgress);
        prbProgress->setObjectName(QStringLiteral("prbProgress"));
        prbProgress->setValue(24);

        gridLayout->addWidget(prbProgress, 1, 1, 1, 3);

        line = new QFrame(dlgTestGenProgress);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 4);

        horizontalSpacer = new QSpacerItem(198, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 3);

        btnCancel = new QPushButton(dlgTestGenProgress);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        gridLayout->addWidget(btnCancel, 3, 3, 1, 1);


        retranslateUi(dlgTestGenProgress);

        btnCancel->setDefault(true);


        QMetaObject::connectSlotsByName(dlgTestGenProgress);
    } // setupUi

    void retranslateUi(QDialog *dlgTestGenProgress)
    {
        dlgTestGenProgress->setWindowTitle(QApplication::translate("dlgTestGenProgress", "\320\242\320\265\321\201\321\202\321\213", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("dlgTestGenProgress", "\320\230\320\264\320\265\321\202 \320\263\320\265\320\275\320\265\321\200\320\260\321\206\320\270\321\217 \321\202\320\265\321\201\321\202\320\276\320\262...", 0));
        btnCancel->setText(QApplication::translate("dlgTestGenProgress", "&\320\237\321\200\320\265\321\200\320\262\320\260\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class dlgTestGenProgress: public Ui_dlgTestGenProgress {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGTESTGENPROGRESS_H
