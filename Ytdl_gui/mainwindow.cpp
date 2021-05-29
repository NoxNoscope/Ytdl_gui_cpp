#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "advanced_settings.h"
#include <QClipboard>
#include <QtConcurrent/QtConcurrent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit->setText("https://www.youtube.com/watch?v=2yrQy7z2LAk");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void runCommand(QString cmd){

    system(cmd.toUtf8().constData());
}

QString MainWindow::createCommand(){
    QString video = ui->lineEdit->text();
    //system("youtube-dl -f bestvideo+bestaudio/best -o /downloaded_Files/%(title)s_(%(height)sp).%(ext)s https://www.youtube.com/watch?v=QtY0tCv5ywk");
    QString cmd = "youtube-dl -f best -o /downloaded_Files/%(title)s_(%(height)sp).%(ext)s " + video;
    return cmd;
}

void MainWindow::on_pushButton_clicked()
{

    QFuture<void> future = QtConcurrent::run(runCommand, MainWindow::createCommand());
}


void MainWindow::on_pushButton_extra_settings_clicked()
{
    QWidget *wdg = new advanced_settings;
    wdg->show();

}


void MainWindow::on_pushButton_copyCMD_clicked()
{
    QClipboard* clipboard = QApplication::clipboard();
    clipboard->setText(MainWindow::createCommand());
}

