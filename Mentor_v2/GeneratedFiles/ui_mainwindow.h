/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actNew;
    QAction *actOpen;
    QAction *actSave;
    QAction *actSaveAs;
    QAction *actGenerate;
    QAction *actPrint;
    QAction *actExit;
    QAction *actSettingsGeneral;
    QAction *actSettingsPrint;
    QAction *actSettingsGeneration;
    QAction *actHelpContents;
    QAction *actHelpIndex;
    QAction *actHelpAbout;
    QAction *actTaskRoot;
    QAction *actGenerateForWeb;
    QWidget *centralWidget;
    QFrame *fraCentral;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QFrame *fraTask;
    QVBoxLayout *verticalLayout;
    QFrame *fraQuiz;
    QVBoxLayout *verticalLayout_2;
    QToolButton *toolButton_12;
    QToolButton *toolButton_13;
    QToolButton *toolButton_14;
    QToolButton *toolButton_15;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_5;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(787, 472);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/apps/ooo-calc.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->setDockNestingEnabled(false);
        MainWindow->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        actNew = new QAction(MainWindow);
        actNew->setObjectName(QStringLiteral("actNew"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/ico/document-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actNew->setIcon(icon1);
        actOpen = new QAction(MainWindow);
        actOpen->setObjectName(QStringLiteral("actOpen"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/ico/document-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actOpen->setIcon(icon2);
        actSave = new QAction(MainWindow);
        actSave->setObjectName(QStringLiteral("actSave"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/ico/document-save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actSave->setIcon(icon3);
        actSaveAs = new QAction(MainWindow);
        actSaveAs->setObjectName(QStringLiteral("actSaveAs"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/ico/document-save-as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actSaveAs->setIcon(icon4);
        actGenerate = new QAction(MainWindow);
        actGenerate->setObjectName(QStringLiteral("actGenerate"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/ico/appointment-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actGenerate->setIcon(icon5);
        actPrint = new QAction(MainWindow);
        actPrint->setObjectName(QStringLiteral("actPrint"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/ico/document-print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actPrint->setIcon(icon6);
        actExit = new QAction(MainWindow);
        actExit->setObjectName(QStringLiteral("actExit"));
        actSettingsGeneral = new QAction(MainWindow);
        actSettingsGeneral->setObjectName(QStringLiteral("actSettingsGeneral"));
        actSettingsGeneral->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/ico/document-properties.png"), QSize(), QIcon::Normal, QIcon::Off);
        actSettingsGeneral->setIcon(icon7);
        actSettingsPrint = new QAction(MainWindow);
        actSettingsPrint->setObjectName(QStringLiteral("actSettingsPrint"));
        actSettingsPrint->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/ico/document-print-preview.png"), QSize(), QIcon::Normal, QIcon::Off);
        actSettingsPrint->setIcon(icon8);
        actSettingsGeneration = new QAction(MainWindow);
        actSettingsGeneration->setObjectName(QStringLiteral("actSettingsGeneration"));
        actSettingsGeneration->setEnabled(false);
        actSettingsGeneration->setIcon(icon5);
        actHelpContents = new QAction(MainWindow);
        actHelpContents->setObjectName(QStringLiteral("actHelpContents"));
        actHelpContents->setEnabled(false);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/ico/edit-find.png"), QSize(), QIcon::Normal, QIcon::Off);
        actHelpContents->setIcon(icon9);
        actHelpIndex = new QAction(MainWindow);
        actHelpIndex->setObjectName(QStringLiteral("actHelpIndex"));
        actHelpIndex->setEnabled(false);
        actHelpAbout = new QAction(MainWindow);
        actHelpAbout->setObjectName(QStringLiteral("actHelpAbout"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/ico/gohome.png"), QSize(), QIcon::Normal, QIcon::Off);
        actHelpAbout->setIcon(icon10);
        actTaskRoot = new QAction(MainWindow);
        actTaskRoot->setObjectName(QStringLiteral("actTaskRoot"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/ico/go-home.png"), QSize(), QIcon::Normal, QIcon::Off);
        actTaskRoot->setIcon(icon11);
        actGenerateForWeb = new QAction(MainWindow);
        actGenerateForWeb->setObjectName(QStringLiteral("actGenerateForWeb"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/ico/mail_new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actGenerateForWeb->setIcon(icon12);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        fraCentral = new QFrame(centralWidget);
        fraCentral->setObjectName(QStringLiteral("fraCentral"));
        fraCentral->setGeometry(QRect(30, 30, 361, 241));
        fraCentral->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(fraCentral);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 1, 0, 0);
        splitter = new QSplitter(fraCentral);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        fraTask = new QFrame(splitter);
        fraTask->setObjectName(QStringLiteral("fraTask"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fraTask->sizePolicy().hasHeightForWidth());
        fraTask->setSizePolicy(sizePolicy);
        fraTask->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(fraTask);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        splitter->addWidget(fraTask);
        fraQuiz = new QFrame(splitter);
        fraQuiz->setObjectName(QStringLiteral("fraQuiz"));
        sizePolicy.setHeightForWidth(fraQuiz->sizePolicy().hasHeightForWidth());
        fraQuiz->setSizePolicy(sizePolicy);
        fraQuiz->setMinimumSize(QSize(0, 0));
        fraQuiz->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(fraQuiz);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        splitter->addWidget(fraQuiz);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        toolButton_12 = new QToolButton(centralWidget);
        toolButton_12->setObjectName(QStringLiteral("toolButton_12"));
        toolButton_12->setGeometry(QRect(470, 160, 31, 41));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/ico/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_12->setIcon(icon13);
        toolButton_12->setIconSize(QSize(24, 24));
        toolButton_12->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_12->setAutoRaise(true);
        toolButton_13 = new QToolButton(centralWidget);
        toolButton_13->setObjectName(QStringLiteral("toolButton_13"));
        toolButton_13->setGeometry(QRect(500, 160, 31, 41));
        toolButton_13->setIcon(icon13);
        toolButton_13->setIconSize(QSize(24, 24));
        toolButton_13->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_13->setAutoRaise(true);
        toolButton_14 = new QToolButton(centralWidget);
        toolButton_14->setObjectName(QStringLiteral("toolButton_14"));
        toolButton_14->setGeometry(QRect(530, 160, 31, 41));
        toolButton_14->setIcon(icon13);
        toolButton_14->setIconSize(QSize(24, 24));
        toolButton_14->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_14->setAutoRaise(true);
        toolButton_15 = new QToolButton(centralWidget);
        toolButton_15->setObjectName(QStringLiteral("toolButton_15"));
        toolButton_15->setGeometry(QRect(560, 160, 31, 41));
        toolButton_15->setIcon(icon13);
        toolButton_15->setIconSize(QSize(24, 24));
        toolButton_15->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_15->setAutoRaise(true);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 787, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_5 = new QMenu(menuBar);
        menu_5->setObjectName(QStringLiteral("menu_5"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_5->menuAction());
        menu->addAction(actNew);
        menu->addAction(actOpen);
        menu->addAction(actSave);
        menu->addAction(actSaveAs);
        menu->addSeparator();
        menu->addAction(actTaskRoot);
        menu->addSeparator();
        menu->addAction(actGenerate);
        menu->addAction(actPrint);
        menu->addAction(actGenerateForWeb);
        menu->addSeparator();
        menu->addAction(actExit);
        menu_5->addAction(actHelpAbout);
        mainToolBar->addAction(actNew);
        mainToolBar->addAction(actOpen);
        mainToolBar->addAction(actSave);
        mainToolBar->addAction(actSaveAs);
        toolBar->addAction(actGenerate);
        toolBar->addAction(actPrint);
        toolBar->addAction(actGenerateForWeb);
        toolBar->addSeparator();
        toolBar->addAction(actTaskRoot);
        toolBar->addSeparator();
        toolBar->addAction(actSettingsGeneral);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\234\320\225\320\235\320\242\320\236\320\240 II", 0));
        actNew->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", 0));
        actNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        actOpen->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214...", 0));
        actOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        actSave->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        actSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        actSaveAs->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\320\272...", 0));
        actGenerate->setText(QApplication::translate("MainWindow", "\320\222\320\260\321\200\320\270\320\260\320\275\321\202\321\213", 0));
        actGenerate->setIconText(QApplication::translate("MainWindow", "\320\222\320\260\321\200\320\270\320\260\320\275\321\202\321\213", 0));
        actGenerate->setShortcut(QApplication::translate("MainWindow", "F5", 0));
        actPrint->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\207\320\260\321\202\321\214 \320\262\320\260\321\200\320\270\320\260\320\275\321\202\320\276\320\262", 0));
        actPrint->setIconText(QApplication::translate("MainWindow", "\320\237\320\265\321\207\320\260\321\202\321\214", 0));
        actPrint->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", 0));
        actExit->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", 0));
        actSettingsGeneral->setText(QApplication::translate("MainWindow", "\320\236\320\261\321\211\320\270\320\265", 0));
        actSettingsPrint->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\207\320\260\321\202\321\214", 0));
        actSettingsGeneration->setText(QApplication::translate("MainWindow", "\320\223\320\265\320\275\320\265\321\200\320\260\321\206\320\270\321\217", 0));
        actHelpContents->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\264\320\265\321\200\320\266\320\260\320\275\320\270\320\265", 0));
        actHelpIndex->setText(QApplication::translate("MainWindow", "\320\243\320\272\320\260\320\267\320\260\321\202\320\265\320\273\321\214", 0));
        actHelpIndex->setShortcut(QApplication::translate("MainWindow", "F1", 0));
        actHelpAbout->setText(QApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265...", 0));
        actTaskRoot->setText(QApplication::translate("MainWindow", "\320\222 \320\275\320\260\321\207\320\260\320\273\320\276", 0));
        actGenerateForWeb->setText(QApplication::translate("MainWindow", "\320\223\320\265\320\275\320\265\321\200\320\260\321\206\320\270\321\217 \320\264\320\273\321\217 web", 0));
        actGenerateForWeb->setIconText(QApplication::translate("MainWindow", "Web-\321\202\320\265\321\201\321\202\321\213", 0));
        toolButton_12->setText(QApplication::translate("MainWindow", "...", 0));
        toolButton_13->setText(QApplication::translate("MainWindow", "...", 0));
        toolButton_14->setText(QApplication::translate("MainWindow", "...", 0));
        toolButton_15->setText(QApplication::translate("MainWindow", "...", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", 0));
        menu_5->setTitle(QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
