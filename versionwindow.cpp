#include "versionwindow.h"
#include "ui_versionwindow.h"
#include "qapplication.h"
#include <QLabel>

VersionWindow::VersionWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VersionWindow)
{   
    ui->setupUi(this);
    ui->VersionNumber->setText("Current Version: " + QString(APP_VERSION));
    this->setWindowTitle("OpenUtau Reloaded " + QString(APP_VERSION));
}

VersionWindow::~VersionWindow()
{
    delete ui;
}
