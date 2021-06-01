#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "advanced_settings.h"
#include <QClipboard>
#include <QtConcurrent/QtConcurrent>
#include <iostream>
#include <QFileDialog>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include<QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit->setText("https://www.youtube.com/watch?v=2yrQy7z2LAk");
    ui->pushButton->setIcon(QIcon(":/downloaded_Files/files/file_download_grey_48x48.png"));

    QFile file("saveLocation.txt");

    file.open(QIODevice::ReadOnly);

    QTextStream in(&file);
    ui->lineEdit_savelocation->setText(in.readAll());
    file.close();


}

MainWindow::~MainWindow()
{
    delete ui;
}

QString text;

void runCommand(QString cmd){


    system(cmd.toUtf8().constData());
}

QString MainWindow::createCommand(){
    QFile file("saveLocation.txt");

    file.open(QIODevice::ReadOnly);

    QTextStream in(&file);
    QString saveLocation = in.readAll();
    file.close();
    QString video = ui->lineEdit->text();
    QString settings = "";

    bool checkstate = ui->checkBox_best->checkState();
    if(checkstate == true)
    {
        settings = settings + "-f best ";
    }


    checkstate = ui->checkBox_audioOnly->checkState();
    if(checkstate == true)
    {
        settings = settings + "--extract-audio --audio-format mp3 ";
    }


    //system("youtube-dl -f bestvideo+bestaudio/best -o /downloaded_Files/%(title)s_(%(height)sp).%(ext)s https://www.youtube.com/watch?v=QtY0tCv5ywk");
    //QString cmd = "youtube-dl -f best -o %userprofile%/Desktop/%(title)s_(%(height)sp).%(ext)s " + video;
    QString cmd = "youtube-dl " + settings + " -o " + saveLocation + "/%(title)s_(%(height)sp).%(ext)s " + video;


    return cmd;
}

void MainWindow::on_pushButton_clicked()
{

    QFuture<void> future = QtConcurrent::run(runCommand, MainWindow::createCommand());
}

void MainWindow::on_lineEdit_returnPressed()
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

void MainWindow::on_pushButton_2_clicked()
{
    QString saveLocation;

    QFile file1("saveLocation.txt");

    file1.open(QIODevice::ReadOnly);

    QTextStream in(&file1);
    QString text = in.readAll();
    file1.close();

    saveLocation = QFileDialog::getExistingDirectory(
                this,
                tr("where u wanna save the videoes?"),
                text
                );

    QFile file("saveLocation.txt");
    file.open(QIODevice::WriteOnly);

    QTextStream out(&file);
    QString text1 = saveLocation;
    if(text1 == "")
    {
        out << text;
        ui->lineEdit_savelocation->setText(text);

    }else{
        out << text1;
        ui->lineEdit_savelocation->setText(text1);

    }
    file.flush();
    file.close();
}












void MainWindow::on_lineEdit_savelocation_textChanged(const QString &arg1)
{

    QFile file("saveLocation.txt");
    file.open(QIODevice::WriteOnly);

    QTextStream out(&file);
    QString text1 = arg1;
    if(text1 == "")
    {
        out << text;

    }else{
        out << text1;

    }
    file.flush();
    file.close();
}

