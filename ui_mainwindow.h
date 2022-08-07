/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionOpen_Recent;
    QAction *actionSave;
    QAction *actionSaveAs;
    QAction *actionClose;
    QAction *actionQuit;
    QAction *actionAbout;
    QAction *actionSelectBorrowersDB;
    QAction *actionSet_Default_KOC_Save_Path;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabIssues;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayoutMainBox;
    QVBoxLayout *verticalLayoutIssuesInput;
    QGroupBox *groupBoxBorrowerCardnumber;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEditIssuesBorrowerCardnumber;
    QPushButton *pushButtonIssuesAcceptCardnumber;
    QPushButton *pushButtonIssuesSearchBorrowers;
    QSpacerItem *horizontalSpacer_8;
    QGroupBox *groupBoxItemBarcode;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEditIssuesItemBarcode;
    QPushButton *pushButtonAddItemBarcode;
    QSpacerItem *horizontalSpacer_9;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QListWidget *listWidgetIssuesScannedBarcodes;
    QHBoxLayout *horizontalLayoutDeleteButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonIssuesDeleteSelectedItem;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayoutCompleteCancelButtons;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *buttonBoxIssues;
    QFrame *line;
    QVBoxLayout *verticalLayoutBorrowerDetails;
    QGroupBox *groupBoxBorrowerDetails;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBoxName;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *borrowerDetailsName;
    QGroupBox *groupBoxAddress;
    QHBoxLayout *horizontalLayout_6;
    QTextEdit *borrowerDetailsAddress;
    QGroupBox *groupBoxPhone;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *borrowerDetailsPhone;
    QGroupBox *groupBoxDOB;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *borrowerDetailsDOB;
    QGroupBox *groupBoxFines;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *borrowerDetailsFines;
    QToolButton *toolButtonFineDetails;
    QPushButton *pushButtonPayFines;
    QGroupBox *groupBoxCurrentIssues;
    QHBoxLayout *horizontalLayout_10;
    QTableWidget *borrowerDetailsCurrentIssues;
    QWidget *tabReturns;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayoutIssuesInput_2;
    QGroupBox *groupBoxItemBarcode_2;
    QHBoxLayout *horizontalLayout_12;
    QLineEdit *lineEditReturnsItemBarcode;
    QPushButton *pushButtonReturnsAddItemBarcode;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QListWidget *listWidgetReturnsScannedBarcodes;
    QHBoxLayout *horizontalLayoutDeleteButton_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonReturnsDeleteSelectedItem;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayoutCompleteCancelButtons_2;
    QSpacerItem *horizontalSpacer_4;
    QDialogButtonBox *buttonBoxReturns;
    QFrame *line_2;
    QSpacerItem *horizontalSpacer_7;
    QWidget *tabHistory;
    QVBoxLayout *verticalLayout_7;
    QTableWidget *tableWidgetHistory;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButtonHistoryDeleteSelectedItem;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuDatabase;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(897, 895);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/images/icons/koha.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionNew->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/images/icons/filenew.png"), QSize(), QIcon::Normal, QIcon::On);
        actionNew->setIcon(icon1);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/images/icons/fileopen.png"), QSize(), QIcon::Normal, QIcon::On);
        actionOpen->setIcon(icon2);
        actionOpen_Recent = new QAction(MainWindow);
        actionOpen_Recent->setObjectName(QString::fromUtf8("actionOpen_Recent"));
        actionOpen_Recent->setEnabled(false);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/images/icons/filesave.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSave->setIcon(icon3);
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/images/icons/filesaveas.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSaveAs->setIcon(icon4);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/images/icons/fileclose.png"), QSize(), QIcon::Normal, QIcon::On);
        actionClose->setIcon(icon5);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/images/icons/application_exit.png"), QSize(), QIcon::Normal, QIcon::On);
        actionQuit->setIcon(icon6);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/images/icons/help_about.png"), QSize(), QIcon::Normal, QIcon::On);
        actionAbout->setIcon(icon7);
        actionSelectBorrowersDB = new QAction(MainWindow);
        actionSelectBorrowersDB->setObjectName(QString::fromUtf8("actionSelectBorrowersDB"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/images/icons/database.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelectBorrowersDB->setIcon(icon8);
        actionSet_Default_KOC_Save_Path = new QAction(MainWindow);
        actionSet_Default_KOC_Save_Path->setObjectName(QString::fromUtf8("actionSet_Default_KOC_Save_Path"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/images/icons/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSet_Default_KOC_Save_Path->setIcon(icon9);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(true);
        tabIssues = new QWidget();
        tabIssues->setObjectName(QString::fromUtf8("tabIssues"));
        tabIssues->setEnabled(true);
        verticalLayout_2 = new QVBoxLayout(tabIssues);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayoutMainBox = new QHBoxLayout();
        horizontalLayoutMainBox->setObjectName(QString::fromUtf8("horizontalLayoutMainBox"));
        horizontalLayoutMainBox->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayoutIssuesInput = new QVBoxLayout();
        verticalLayoutIssuesInput->setObjectName(QString::fromUtf8("verticalLayoutIssuesInput"));
        groupBoxBorrowerCardnumber = new QGroupBox(tabIssues);
        groupBoxBorrowerCardnumber->setObjectName(QString::fromUtf8("groupBoxBorrowerCardnumber"));
        horizontalLayout_3 = new QHBoxLayout(groupBoxBorrowerCardnumber);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineEditIssuesBorrowerCardnumber = new QLineEdit(groupBoxBorrowerCardnumber);
        lineEditIssuesBorrowerCardnumber->setObjectName(QString::fromUtf8("lineEditIssuesBorrowerCardnumber"));

        horizontalLayout_3->addWidget(lineEditIssuesBorrowerCardnumber);

        pushButtonIssuesAcceptCardnumber = new QPushButton(groupBoxBorrowerCardnumber);
        pushButtonIssuesAcceptCardnumber->setObjectName(QString::fromUtf8("pushButtonIssuesAcceptCardnumber"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/images/icons/button_ok.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButtonIssuesAcceptCardnumber->setIcon(icon10);

        horizontalLayout_3->addWidget(pushButtonIssuesAcceptCardnumber);

        pushButtonIssuesSearchBorrowers = new QPushButton(groupBoxBorrowerCardnumber);
        pushButtonIssuesSearchBorrowers->setObjectName(QString::fromUtf8("pushButtonIssuesSearchBorrowers"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/images/icons/system-search.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButtonIssuesSearchBorrowers->setIcon(icon11);

        horizontalLayout_3->addWidget(pushButtonIssuesSearchBorrowers);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);


        verticalLayoutIssuesInput->addWidget(groupBoxBorrowerCardnumber);

        groupBoxItemBarcode = new QGroupBox(tabIssues);
        groupBoxItemBarcode->setObjectName(QString::fromUtf8("groupBoxItemBarcode"));
        horizontalLayout_4 = new QHBoxLayout(groupBoxItemBarcode);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lineEditIssuesItemBarcode = new QLineEdit(groupBoxItemBarcode);
        lineEditIssuesItemBarcode->setObjectName(QString::fromUtf8("lineEditIssuesItemBarcode"));

        horizontalLayout_4->addWidget(lineEditIssuesItemBarcode);

        pushButtonAddItemBarcode = new QPushButton(groupBoxItemBarcode);
        pushButtonAddItemBarcode->setObjectName(QString::fromUtf8("pushButtonAddItemBarcode"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/images/icons/add.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButtonAddItemBarcode->setIcon(icon12);

        horizontalLayout_4->addWidget(pushButtonAddItemBarcode);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);


        verticalLayoutIssuesInput->addWidget(groupBoxItemBarcode);

        groupBox = new QGroupBox(tabIssues);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        listWidgetIssuesScannedBarcodes = new QListWidget(groupBox);
        listWidgetIssuesScannedBarcodes->setObjectName(QString::fromUtf8("listWidgetIssuesScannedBarcodes"));
        listWidgetIssuesScannedBarcodes->setAlternatingRowColors(true);
        listWidgetIssuesScannedBarcodes->setSelectionMode(QAbstractItemView::MultiSelection);

        verticalLayout_3->addWidget(listWidgetIssuesScannedBarcodes);

        horizontalLayoutDeleteButton = new QHBoxLayout();
        horizontalLayoutDeleteButton->setObjectName(QString::fromUtf8("horizontalLayoutDeleteButton"));
        horizontalLayoutDeleteButton->setContentsMargins(-1, 5, -1, 5);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutDeleteButton->addItem(horizontalSpacer);

        pushButtonIssuesDeleteSelectedItem = new QPushButton(groupBox);
        pushButtonIssuesDeleteSelectedItem->setObjectName(QString::fromUtf8("pushButtonIssuesDeleteSelectedItem"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/images/icons/editdelete.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButtonIssuesDeleteSelectedItem->setIcon(icon13);

        horizontalLayoutDeleteButton->addWidget(pushButtonIssuesDeleteSelectedItem);


        verticalLayout_3->addLayout(horizontalLayoutDeleteButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayoutCompleteCancelButtons = new QHBoxLayout();
        horizontalLayoutCompleteCancelButtons->setObjectName(QString::fromUtf8("horizontalLayoutCompleteCancelButtons"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutCompleteCancelButtons->addItem(horizontalSpacer_2);

        buttonBoxIssues = new QDialogButtonBox(groupBox);
        buttonBoxIssues->setObjectName(QString::fromUtf8("buttonBoxIssues"));
        buttonBoxIssues->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayoutCompleteCancelButtons->addWidget(buttonBoxIssues);


        verticalLayout_3->addLayout(horizontalLayoutCompleteCancelButtons);


        verticalLayoutIssuesInput->addWidget(groupBox);


        horizontalLayoutMainBox->addLayout(verticalLayoutIssuesInput);

        line = new QFrame(tabIssues);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayoutMainBox->addWidget(line);

        verticalLayoutBorrowerDetails = new QVBoxLayout();
        verticalLayoutBorrowerDetails->setObjectName(QString::fromUtf8("verticalLayoutBorrowerDetails"));
        verticalLayoutBorrowerDetails->setSizeConstraint(QLayout::SetDefaultConstraint);
        groupBoxBorrowerDetails = new QGroupBox(tabIssues);
        groupBoxBorrowerDetails->setObjectName(QString::fromUtf8("groupBoxBorrowerDetails"));
        verticalLayout_5 = new QVBoxLayout(groupBoxBorrowerDetails);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        groupBoxName = new QGroupBox(groupBoxBorrowerDetails);
        groupBoxName->setObjectName(QString::fromUtf8("groupBoxName"));
        horizontalLayout_5 = new QHBoxLayout(groupBoxName);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        borrowerDetailsName = new QLineEdit(groupBoxName);
        borrowerDetailsName->setObjectName(QString::fromUtf8("borrowerDetailsName"));
        borrowerDetailsName->setReadOnly(true);

        horizontalLayout_5->addWidget(borrowerDetailsName);


        verticalLayout_5->addWidget(groupBoxName);

        groupBoxAddress = new QGroupBox(groupBoxBorrowerDetails);
        groupBoxAddress->setObjectName(QString::fromUtf8("groupBoxAddress"));
        horizontalLayout_6 = new QHBoxLayout(groupBoxAddress);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        borrowerDetailsAddress = new QTextEdit(groupBoxAddress);
        borrowerDetailsAddress->setObjectName(QString::fromUtf8("borrowerDetailsAddress"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(borrowerDetailsAddress->sizePolicy().hasHeightForWidth());
        borrowerDetailsAddress->setSizePolicy(sizePolicy);
        borrowerDetailsAddress->setReadOnly(true);

        horizontalLayout_6->addWidget(borrowerDetailsAddress);


        verticalLayout_5->addWidget(groupBoxAddress);

        groupBoxPhone = new QGroupBox(groupBoxBorrowerDetails);
        groupBoxPhone->setObjectName(QString::fromUtf8("groupBoxPhone"));
        horizontalLayout_7 = new QHBoxLayout(groupBoxPhone);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        borrowerDetailsPhone = new QLineEdit(groupBoxPhone);
        borrowerDetailsPhone->setObjectName(QString::fromUtf8("borrowerDetailsPhone"));
        borrowerDetailsPhone->setReadOnly(true);

        horizontalLayout_7->addWidget(borrowerDetailsPhone);


        verticalLayout_5->addWidget(groupBoxPhone);

        groupBoxDOB = new QGroupBox(groupBoxBorrowerDetails);
        groupBoxDOB->setObjectName(QString::fromUtf8("groupBoxDOB"));
        horizontalLayout_8 = new QHBoxLayout(groupBoxDOB);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        borrowerDetailsDOB = new QLineEdit(groupBoxDOB);
        borrowerDetailsDOB->setObjectName(QString::fromUtf8("borrowerDetailsDOB"));
        borrowerDetailsDOB->setReadOnly(true);

        horizontalLayout_8->addWidget(borrowerDetailsDOB);


        verticalLayout_5->addWidget(groupBoxDOB);

        groupBoxFines = new QGroupBox(groupBoxBorrowerDetails);
        groupBoxFines->setObjectName(QString::fromUtf8("groupBoxFines"));
        horizontalLayout_9 = new QHBoxLayout(groupBoxFines);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        borrowerDetailsFines = new QLineEdit(groupBoxFines);
        borrowerDetailsFines->setObjectName(QString::fromUtf8("borrowerDetailsFines"));
        borrowerDetailsFines->setReadOnly(true);

        horizontalLayout_9->addWidget(borrowerDetailsFines);

        toolButtonFineDetails = new QToolButton(groupBoxFines);
        toolButtonFineDetails->setObjectName(QString::fromUtf8("toolButtonFineDetails"));

        horizontalLayout_9->addWidget(toolButtonFineDetails);

        pushButtonPayFines = new QPushButton(groupBoxFines);
        pushButtonPayFines->setObjectName(QString::fromUtf8("pushButtonPayFines"));

        horizontalLayout_9->addWidget(pushButtonPayFines);


        verticalLayout_5->addWidget(groupBoxFines);

        groupBoxCurrentIssues = new QGroupBox(groupBoxBorrowerDetails);
        groupBoxCurrentIssues->setObjectName(QString::fromUtf8("groupBoxCurrentIssues"));
        horizontalLayout_10 = new QHBoxLayout(groupBoxCurrentIssues);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        borrowerDetailsCurrentIssues = new QTableWidget(groupBoxCurrentIssues);
        if (borrowerDetailsCurrentIssues->columnCount() < 4)
            borrowerDetailsCurrentIssues->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        borrowerDetailsCurrentIssues->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        borrowerDetailsCurrentIssues->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        borrowerDetailsCurrentIssues->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        borrowerDetailsCurrentIssues->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        borrowerDetailsCurrentIssues->setObjectName(QString::fromUtf8("borrowerDetailsCurrentIssues"));
        borrowerDetailsCurrentIssues->setMinimumSize(QSize(0, 300));
        borrowerDetailsCurrentIssues->setEditTriggers(QAbstractItemView::NoEditTriggers);
        borrowerDetailsCurrentIssues->setDragDropOverwriteMode(false);
        borrowerDetailsCurrentIssues->setAlternatingRowColors(true);
        borrowerDetailsCurrentIssues->setSelectionMode(QAbstractItemView::SingleSelection);
        borrowerDetailsCurrentIssues->setSelectionBehavior(QAbstractItemView::SelectRows);
        borrowerDetailsCurrentIssues->horizontalHeader()->setCascadingSectionResizes(true);
        borrowerDetailsCurrentIssues->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        borrowerDetailsCurrentIssues->horizontalHeader()->setStretchLastSection(true);
        borrowerDetailsCurrentIssues->verticalHeader()->setProperty("showSortIndicator", QVariant(false));

        horizontalLayout_10->addWidget(borrowerDetailsCurrentIssues);


        verticalLayout_5->addWidget(groupBoxCurrentIssues);


        verticalLayoutBorrowerDetails->addWidget(groupBoxBorrowerDetails);


        horizontalLayoutMainBox->addLayout(verticalLayoutBorrowerDetails);


        verticalLayout_2->addLayout(horizontalLayoutMainBox);

        tabWidget->addTab(tabIssues, QString());
        tabReturns = new QWidget();
        tabReturns->setObjectName(QString::fromUtf8("tabReturns"));
        verticalLayout_6 = new QVBoxLayout(tabReturns);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayoutIssuesInput_2 = new QVBoxLayout();
        verticalLayoutIssuesInput_2->setObjectName(QString::fromUtf8("verticalLayoutIssuesInput_2"));
        groupBoxItemBarcode_2 = new QGroupBox(tabReturns);
        groupBoxItemBarcode_2->setObjectName(QString::fromUtf8("groupBoxItemBarcode_2"));
        horizontalLayout_12 = new QHBoxLayout(groupBoxItemBarcode_2);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        lineEditReturnsItemBarcode = new QLineEdit(groupBoxItemBarcode_2);
        lineEditReturnsItemBarcode->setObjectName(QString::fromUtf8("lineEditReturnsItemBarcode"));

        horizontalLayout_12->addWidget(lineEditReturnsItemBarcode);

        pushButtonReturnsAddItemBarcode = new QPushButton(groupBoxItemBarcode_2);
        pushButtonReturnsAddItemBarcode->setObjectName(QString::fromUtf8("pushButtonReturnsAddItemBarcode"));
        pushButtonReturnsAddItemBarcode->setIcon(icon12);

        horizontalLayout_12->addWidget(pushButtonReturnsAddItemBarcode);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_5);


        verticalLayoutIssuesInput_2->addWidget(groupBoxItemBarcode_2);

        groupBox_2 = new QGroupBox(tabReturns);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        listWidgetReturnsScannedBarcodes = new QListWidget(groupBox_2);
        listWidgetReturnsScannedBarcodes->setObjectName(QString::fromUtf8("listWidgetReturnsScannedBarcodes"));
        listWidgetReturnsScannedBarcodes->setAlternatingRowColors(true);
        listWidgetReturnsScannedBarcodes->setSelectionMode(QAbstractItemView::MultiSelection);

        verticalLayout_4->addWidget(listWidgetReturnsScannedBarcodes);

        horizontalLayoutDeleteButton_2 = new QHBoxLayout();
        horizontalLayoutDeleteButton_2->setObjectName(QString::fromUtf8("horizontalLayoutDeleteButton_2"));
        horizontalLayoutDeleteButton_2->setContentsMargins(-1, 5, -1, 5);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutDeleteButton_2->addItem(horizontalSpacer_3);

        pushButtonReturnsDeleteSelectedItem = new QPushButton(groupBox_2);
        pushButtonReturnsDeleteSelectedItem->setObjectName(QString::fromUtf8("pushButtonReturnsDeleteSelectedItem"));
        pushButtonReturnsDeleteSelectedItem->setIcon(icon13);

        horizontalLayoutDeleteButton_2->addWidget(pushButtonReturnsDeleteSelectedItem);


        verticalLayout_4->addLayout(horizontalLayoutDeleteButton_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_2);

        horizontalLayoutCompleteCancelButtons_2 = new QHBoxLayout();
        horizontalLayoutCompleteCancelButtons_2->setObjectName(QString::fromUtf8("horizontalLayoutCompleteCancelButtons_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutCompleteCancelButtons_2->addItem(horizontalSpacer_4);

        buttonBoxReturns = new QDialogButtonBox(groupBox_2);
        buttonBoxReturns->setObjectName(QString::fromUtf8("buttonBoxReturns"));
        buttonBoxReturns->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayoutCompleteCancelButtons_2->addWidget(buttonBoxReturns);


        verticalLayout_4->addLayout(horizontalLayoutCompleteCancelButtons_2);


        verticalLayoutIssuesInput_2->addWidget(groupBox_2);


        horizontalLayout_2->addLayout(verticalLayoutIssuesInput_2);

        line_2 = new QFrame(tabReturns);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_2);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);


        verticalLayout_6->addLayout(horizontalLayout_2);

        tabWidget->addTab(tabReturns, QString());
        tabHistory = new QWidget();
        tabHistory->setObjectName(QString::fromUtf8("tabHistory"));
        verticalLayout_7 = new QVBoxLayout(tabHistory);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        tableWidgetHistory = new QTableWidget(tabHistory);
        if (tableWidgetHistory->columnCount() < 5)
            tableWidgetHistory->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetHistory->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetHistory->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetHistory->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetHistory->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetHistory->setHorizontalHeaderItem(4, __qtablewidgetitem8);
        tableWidgetHistory->setObjectName(QString::fromUtf8("tableWidgetHistory"));
        tableWidgetHistory->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetHistory->setAlternatingRowColors(true);
        tableWidgetHistory->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetHistory->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidgetHistory->horizontalHeader()->setStretchLastSection(true);
        tableWidgetHistory->verticalHeader()->setVisible(false);

        verticalLayout_7->addWidget(tableWidgetHistory);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        pushButtonHistoryDeleteSelectedItem = new QPushButton(tabHistory);
        pushButtonHistoryDeleteSelectedItem->setObjectName(QString::fromUtf8("pushButtonHistoryDeleteSelectedItem"));
        pushButtonHistoryDeleteSelectedItem->setIcon(icon13);

        horizontalLayout->addWidget(pushButtonHistoryDeleteSelectedItem);


        verticalLayout_7->addLayout(horizontalLayout);

        tabWidget->addTab(tabHistory, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 897, 17));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuDatabase = new QMenu(menubar);
        menuDatabase->setObjectName(QString::fromUtf8("menuDatabase"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuDatabase->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionOpen_Recent);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSaveAs);
        menuFile->addSeparator();
        menuFile->addAction(actionClose);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuHelp->addAction(actionAbout);
        menuDatabase->addAction(actionSelectBorrowersDB);
        menuDatabase->addAction(actionSet_Default_KOC_Save_Path);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Koha \303\207evrimd\304\261\305\237\304\261 Dola\305\237\304\261m", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "&Yeni", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "&A\303\247", nullptr));
        actionOpen_Recent->setText(QCoreApplication::translate("MainWindow", "Son Kullan\304\261lan", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "&Kaydet", nullptr));
        actionSaveAs->setText(QCoreApplication::translate("MainWindow", "Save &As...", nullptr));
        actionClose->setText(QCoreApplication::translate("MainWindow", "&Kapat", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "&\303\207\304\261k\304\261\305\237", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionSelectBorrowersDB->setText(QCoreApplication::translate("MainWindow", "Borrowers DB Dosyas\304\261 Se\303\247", nullptr));
        actionSet_Default_KOC_Save_Path->setText(QCoreApplication::translate("MainWindow", "KOC Kay\304\261t Yerini Ayarla", nullptr));
#if QT_CONFIG(accessibility)
        tabIssues->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        groupBoxBorrowerCardnumber->setTitle(QCoreApplication::translate("MainWindow", "Kullan\304\261c\304\261 Kart Numaras\304\261", nullptr));
        pushButtonIssuesAcceptCardnumber->setText(QCoreApplication::translate("MainWindow", "&Tamam", nullptr));
        pushButtonIssuesSearchBorrowers->setText(QCoreApplication::translate("MainWindow", "&Ara", nullptr));
        groupBoxItemBarcode->setTitle(QCoreApplication::translate("MainWindow", "Materyal Barkodu", nullptr));
        pushButtonAddItemBarcode->setText(QCoreApplication::translate("MainWindow", "Materyal &ekle", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\303\226nceden Taranm\304\261\305\237 Barkodlar", nullptr));
        pushButtonIssuesDeleteSelectedItem->setText(QCoreApplication::translate("MainWindow", "&Se\303\247ili Materyal(ler)i Sil", nullptr));
        groupBoxBorrowerDetails->setTitle(QCoreApplication::translate("MainWindow", "Kullan\304\261c\304\261 Detaylar\304\261", nullptr));
        groupBoxName->setTitle(QCoreApplication::translate("MainWindow", "\304\260sim", nullptr));
        groupBoxAddress->setTitle(QCoreApplication::translate("MainWindow", "Adres", nullptr));
        groupBoxPhone->setTitle(QCoreApplication::translate("MainWindow", "Telefon Numaras\304\261", nullptr));
        groupBoxDOB->setTitle(QCoreApplication::translate("MainWindow", "Do\304\237um Tarihi", nullptr));
        groupBoxFines->setTitle(QCoreApplication::translate("MainWindow", "Bor\303\247lar", nullptr));
        toolButtonFineDetails->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        pushButtonPayFines->setText(QCoreApplication::translate("MainWindow", "&Bor\303\247 \303\226de", nullptr));
        groupBoxCurrentIssues->setTitle(QCoreApplication::translate("MainWindow", "Mevcut \303\226d\303\274n\303\247", nullptr));
        QTableWidgetItem *___qtablewidgetitem = borrowerDetailsCurrentIssues->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\304\260ade Tarihi", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = borrowerDetailsCurrentIssues->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Ba\305\237l\304\261k", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = borrowerDetailsCurrentIssues->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "T\303\274r", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = borrowerDetailsCurrentIssues->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Yer Numaras\304\261", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabIssues), QCoreApplication::translate("MainWindow", "&\303\226d\303\274n\303\247", nullptr));
        groupBoxItemBarcode_2->setTitle(QCoreApplication::translate("MainWindow", "Materyal Barkodu", nullptr));
        pushButtonReturnsAddItemBarcode->setText(QCoreApplication::translate("MainWindow", "&Materyal Ekle", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\303\226nceden Taranm\304\261\305\237 Barkodlar", nullptr));
        pushButtonReturnsDeleteSelectedItem->setText(QCoreApplication::translate("MainWindow", "&Se\303\247ili Materyalleri Sil", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabReturns), QCoreApplication::translate("MainWindow", "&\304\260ade", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetHistory->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetHistory->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Kart Numaras\304\261", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetHistory->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Barkod", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetHistory->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "\303\226deme", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetHistory->horizontalHeaderItem(4);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "Tarih", nullptr));
        pushButtonHistoryDeleteSelectedItem->setText(QCoreApplication::translate("MainWindow", "&Se\303\247ili Materyalleri Sil", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabHistory), QCoreApplication::translate("MainWindow", "&Ge\303\247mi\305\237", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "&Dosya", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "&Yard\304\261m", nullptr));
        menuDatabase->setTitle(QCoreApplication::translate("MainWindow", "Ayarlar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
