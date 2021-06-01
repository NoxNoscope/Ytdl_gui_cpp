#ifndef ADVANCED_SETTINGS_H
#define ADVANCED_SETTINGS_H

#include <QWidget>

namespace Ui {
class advanced_settings;
}

class advanced_settings : public QWidget
{
    Q_OBJECT

public:
    explicit advanced_settings(QWidget *parent = nullptr);
    ~advanced_settings();

private slots:
    void on_pushButton_updateYTDL_clicked();

    void on_lineEdit_customCommand_returnPressed();

    void on_pushButton_runCmd_clicked();

    QString runCMD();

    void on_pushButton_CustomCommand_clicked();

private:
    Ui::advanced_settings *ui;
};

#endif // ADVANCED_SETTINGS_H
