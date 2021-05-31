/********************************************************************************
** Form generated from reading UI file 'advanced_settings.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADVANCED_SETTINGS_H
#define UI_ADVANCED_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_advanced_settings
{
public:
    QPushButton *pushButton_updateYTDL;
    QLineEdit *lineEdit_customCommand;
    QPushButton *pushButton_runCmd;

    void setupUi(QWidget *advanced_settings)
    {
        if (advanced_settings->objectName().isEmpty())
            advanced_settings->setObjectName(QString::fromUtf8("advanced_settings"));
        advanced_settings->resize(939, 463);
        pushButton_updateYTDL = new QPushButton(advanced_settings);
        pushButton_updateYTDL->setObjectName(QString::fromUtf8("pushButton_updateYTDL"));
        pushButton_updateYTDL->setGeometry(QRect(0, 20, 71, 31));
        lineEdit_customCommand = new QLineEdit(advanced_settings);
        lineEdit_customCommand->setObjectName(QString::fromUtf8("lineEdit_customCommand"));
        lineEdit_customCommand->setGeometry(QRect(0, 0, 371, 21));
        pushButton_runCmd = new QPushButton(advanced_settings);
        pushButton_runCmd->setObjectName(QString::fromUtf8("pushButton_runCmd"));
        pushButton_runCmd->setGeometry(QRect(370, 0, 31, 21));

        retranslateUi(advanced_settings);

        QMetaObject::connectSlotsByName(advanced_settings);
    } // setupUi

    void retranslateUi(QWidget *advanced_settings)
    {
        advanced_settings->setWindowTitle(QCoreApplication::translate("advanced_settings", "Form", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_updateYTDL->setToolTip(QCoreApplication::translate("advanced_settings", "will only update the downloading part itself (usefull if it doesnt work anymore)", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_updateYTDL->setText(QCoreApplication::translate("advanced_settings", "UpdateYTDL", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_customCommand->setToolTip(QCoreApplication::translate("advanced_settings", "type in a normal ytdl command (include youtube-dl at the beginning)", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_customCommand->setText(QCoreApplication::translate("advanced_settings", "youtube-dl custom commands here", nullptr));
        pushButton_runCmd->setText(QCoreApplication::translate("advanced_settings", "RUN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class advanced_settings: public Ui_advanced_settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADVANCED_SETTINGS_H
