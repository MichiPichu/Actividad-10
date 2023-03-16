/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *btnCapturar;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *txtID;
    QLabel *label_4;
    QLineEdit *txtVoltaje;
    QLabel *label_5;
    QLineEdit *txtPx;
    QLabel *label_3;
    QLineEdit *txtPy;
    QLabel *label_7;
    QLineEdit *txtRed;
    QLabel *label_8;
    QLineEdit *txtGreen;
    QLabel *label_6;
    QLineEdit *txtBlue;
    QPushButton *btnCapturar_2;
    QWidget *tab_2;
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuAbrir;
    QMenu *menuGuardar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(497, 359);
        MainWindow->setStyleSheet(QString::fromUtf8("font: 600 italic 20pt \"Segoe UI\";\n"
"font: 18pt \"Segoe UI\";\n"
"font: 16pt \"Segoe UI\";"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 501, 321));
        tabWidget->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"font: 9pt \"Segoe UI\";"));
        tab = new QWidget();
        tab->setObjectName("tab");
        label = new QLabel(tab);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 10, 221, 20));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";"));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(400, 240, 75, 24));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));
        btnCapturar = new QPushButton(tab);
        btnCapturar->setObjectName("btnCapturar");
        btnCapturar->setGeometry(QRect(350, 70, 101, 31));
        btnCapturar->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));
        formLayoutWidget = new QWidget(tab);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(120, 50, 197, 211));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        txtID = new QLineEdit(formLayoutWidget);
        txtID->setObjectName("txtID");
        txtID->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));

        formLayout->setWidget(0, QFormLayout::FieldRole, txtID);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        txtVoltaje = new QLineEdit(formLayoutWidget);
        txtVoltaje->setObjectName("txtVoltaje");
        txtVoltaje->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));

        formLayout->setWidget(1, QFormLayout::FieldRole, txtVoltaje);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        txtPx = new QLineEdit(formLayoutWidget);
        txtPx->setObjectName("txtPx");
        txtPx->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));

        formLayout->setWidget(2, QFormLayout::FieldRole, txtPx);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        txtPy = new QLineEdit(formLayoutWidget);
        txtPy->setObjectName("txtPy");
        txtPy->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));

        formLayout->setWidget(3, QFormLayout::FieldRole, txtPy);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        txtRed = new QLineEdit(formLayoutWidget);
        txtRed->setObjectName("txtRed");
        txtRed->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));

        formLayout->setWidget(4, QFormLayout::FieldRole, txtRed);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_8);

        txtGreen = new QLineEdit(formLayoutWidget);
        txtGreen->setObjectName("txtGreen");
        txtGreen->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));

        formLayout->setWidget(5, QFormLayout::FieldRole, txtGreen);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_6);

        txtBlue = new QLineEdit(formLayoutWidget);
        txtBlue->setObjectName("txtBlue");
        txtBlue->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));

        formLayout->setWidget(6, QFormLayout::FieldRole, txtBlue);

        btnCapturar_2 = new QPushButton(tab);
        btnCapturar_2->setObjectName("btnCapturar_2");
        btnCapturar_2->setGeometry(QRect(350, 110, 101, 31));
        btnCapturar_2->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setObjectName("gridLayout");
        listWidget = new QListWidget(tab_2);
        listWidget->setObjectName("listWidget");

        gridLayout->addWidget(listWidget, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 497, 34));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        menubar->setFont(font);
        menuAbrir = new QMenu(menubar);
        menuAbrir->setObjectName("menuAbrir");
        menuAbrir->setFont(font);
        menuGuardar = new QMenu(menubar);
        menuGuardar->setObjectName("menuGuardar");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuAbrir->menuAction());
        menubar->addAction(menuGuardar->menuAction());

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "CAPTURAR NEURONAS", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Cerrar", nullptr));
        btnCapturar->setText(QCoreApplication::translate("MainWindow", "Agregar al inicio", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "ID:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Voltaje:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Posicion X:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Posicion Y:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Red:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Green:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Blue:", nullptr));
        btnCapturar_2->setText(QCoreApplication::translate("MainWindow", "Agregar al final", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Capturar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Lista", nullptr));
        menuAbrir->setTitle(QCoreApplication::translate("MainWindow", "Abrir", nullptr));
        menuGuardar->setTitle(QCoreApplication::translate("MainWindow", "Guardar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
