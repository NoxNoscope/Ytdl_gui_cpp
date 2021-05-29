#include "advanced_settings.h"
#include "ui_advanced_settings.h"
#include <QtConcurrent/QtConcurrent>

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

