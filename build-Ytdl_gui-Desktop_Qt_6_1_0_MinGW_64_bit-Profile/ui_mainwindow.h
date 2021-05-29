/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_extra_settings;
    QCheckBox *checkBox_best;
    QPushButton *pushButton_copyCMD;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(361, 65);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(0, 0, 331, 21));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 0, 31, 21));
        pushButton_extra_settings = new QPushButton(centralwidget);
        pushButton_extra_settings->setObjectName(QString::fromUtf8("pushButton_extra_settings"));
        pushButton_extra_settings->setGeometry(QRect(0, 20, 80, 21));
        checkBox_best = new QCheckBox(centralwidget);
        checkBox_best->setObjectName(QString::fromUtf8("checkBox_best"));
        checkBox_best->setGeometry(QRect(220, 20, 41, 20));
        pushButton_copyCMD = new QPushButton(centralwidget);
        pushButton_copyCMD->setObjectName(QString::fromUtf8("pushButton_copyCMD"));
        pushButton_copyCMD->setGeometry(QRect(80, 20, 131, 21));
        pushButton_copyCMD->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 361, 20));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "D", nullptr));
        pushButton_extra_settings->setText(QCoreApplication::translate("MainWindow", "extra settings", nullptr));
        checkBox_best->setText(QCoreApplication::translate("MainWindow", "best", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_copyCMD->setToolTip(QCoreApplication::translate("MainWindow", "to get the raw command it runs, could be used for creating custom commands", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_copyCMD->setText(QCoreApplication::translate("MainWindow", "copy ytdl command", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
