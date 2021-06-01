#include "advanced_settings.h"
#include "ui_advanced_settings.h"
#include <QtConcurrent/QtConcurrent>
#include <QDesktopServices>

advanced_settings::advanced_settings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::advanced_settings)
{
    ui->setupUi(this);
}

advanced_settings::~advanced_settings()
{
    delete ui;
}


void updateCMD(){
    system("youtube-dl -U");
}

void advanced_settings::on_pushButton_updateYTDL_clicked()
{
    QFuture<void> future = QtConcurrent::run(updateCMD);
}

QString advanced_settings::runCMD(){
    QString p = ui->lineEdit_customCommand->text();
    return p;
}

void runCMDd(QString yeh){
    system(yeh.toUtf8().constData());
}

void advanced_settings::on_lineEdit_customCommand_returnPressed()
{
    QFuture<void> future = QtConcurrent::run(runCMDd, advanced_settings::runCMD());

}

void advanced_settings::on_pushButton_runCmd_clicked()
{
    QFuture<void> future = QtConcurrent::run(runCMDd, advanced_settings::runCMD());
}


void advanced_settings::on_pushButton_CustomCommand_clicked()
{
    QDesktopServices::openUrl(QUrl("https://github.com/ytdl-org/youtube-dl/blob/master/README.md#options"));
}

