/********************************************************************************
** Form generated from reading UI file 'borrowersearch.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORROWERSEARCH_H
#define UI_BORROWERSEARCH_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BorrowerSearch
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *nameLast;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *nameFirst;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_4;
    QPushButton *searchBorrowersButton;
    QTableWidget *resultsTable;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonCancel;
    QPushButton *pushButtonOK;

    void setupUi(QDialog *BorrowerSearch)
    {
        if (BorrowerSearch->objectName().isEmpty())
            BorrowerSearch->setObjectName(QString::fromUtf8("BorrowerSearch"));
        BorrowerSearch->resize(667, 546);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/images/icons/koha.png"), QSize(), QIcon::Normal, QIcon::Off);
        BorrowerSearch->setWindowIcon(icon);
        BorrowerSearch->setSizeGripEnabled(true);
        BorrowerSearch->setModal(true);
        verticalLayout = new QVBoxLayout(BorrowerSearch);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(BorrowerSearch);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 5, 0);
        verticalLayout_3 = new QVBoxLayout();
#ifndef Q_OS_MAC
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
#endif
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        nameLast = new QLineEdit(groupBox);
        nameLast->setObjectName(QString::fromUtf8("nameLast"));

        horizontalLayout->addWidget(nameLast);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        nameFirst = new QLineEdit(groupBox);
        nameFirst->setObjectName(QString::fromUtf8("nameFirst"));

        horizontalLayout_2->addWidget(nameFirst);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, -1, -1, -1);
        searchBorrowersButton = new QPushButton(groupBox);
        searchBorrowersButton->setObjectName(QString::fromUtf8("searchBorrowersButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/images/icons/system-search.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchBorrowersButton->setIcon(icon1);

        verticalLayout_4->addWidget(searchBorrowersButton);


        horizontalLayout_3->addLayout(verticalLayout_4);


        verticalLayout_2->addLayout(horizontalLayout_3);

        resultsTable = new QTableWidget(groupBox);
        if (resultsTable->columnCount() < 5)
            resultsTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        resultsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        resultsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        resultsTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        resultsTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        resultsTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        resultsTable->setObjectName(QString::fromUtf8("resultsTable"));
        resultsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        resultsTable->setSelectionMode(QAbstractItemView::SingleSelection);
        resultsTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        resultsTable->horizontalHeader()->setStretchLastSection(true);
        resultsTable->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(resultsTable);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pushButtonCancel = new QPushButton(groupBox);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/images/icons/button_cancel.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButtonCancel->setIcon(icon2);

        horizontalLayout_4->addWidget(pushButtonCancel);

        pushButtonOK = new QPushButton(groupBox);
        pushButtonOK->setObjectName(QString::fromUtf8("pushButtonOK"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/images/icons/dialog_ok_apply.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButtonOK->setIcon(icon3);

        horizontalLayout_4->addWidget(pushButtonOK);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout->addWidget(groupBox);

        QWidget::setTabOrder(nameLast, nameFirst);
        QWidget::setTabOrder(nameFirst, searchBorrowersButton);
        QWidget::setTabOrder(searchBorrowersButton, resultsTable);
        QWidget::setTabOrder(resultsTable, pushButtonOK);
        QWidget::setTabOrder(pushButtonOK, pushButtonCancel);

        retranslateUi(BorrowerSearch);

        QMetaObject::connectSlotsByName(BorrowerSearch);
    } // setupUi

    void retranslateUi(QDialog *BorrowerSearch)
    {
        BorrowerSearch->setWindowTitle(QCoreApplication::translate("BorrowerSearch", "Kullan\304\261c\304\261 Arama - Koha \303\207evrimd\304\261\305\237\304\261 Dola\305\237\304\261m", nullptr));
        groupBox->setTitle(QCoreApplication::translate("BorrowerSearch", "Kullan\304\261c\304\261 Arama", nullptr));
        label->setText(QCoreApplication::translate("BorrowerSearch", "Soyisim", nullptr));
        label_2->setText(QCoreApplication::translate("BorrowerSearch", "\304\260sim", nullptr));
        searchBorrowersButton->setText(QCoreApplication::translate("BorrowerSearch", "Kullan\304\261c\304\261 Ara", nullptr));
        QTableWidgetItem *___qtablewidgetitem = resultsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("BorrowerSearch", "Kart Numaras\304\261", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = resultsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("BorrowerSearch", "Soyisim", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = resultsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("BorrowerSearch", "\304\260sim", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = resultsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("BorrowerSearch", "Do\304\237um Tarihi", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = resultsTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("BorrowerSearch", "Adres", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("BorrowerSearch", "&\304\260ptal", nullptr));
        pushButtonOK->setText(QCoreApplication::translate("BorrowerSearch", "&Tamam", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BorrowerSearch: public Ui_BorrowerSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROWERSEARCH_H
