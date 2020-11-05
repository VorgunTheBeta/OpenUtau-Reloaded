#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "versionwindow.h"
#include <QProcess>
#include <QKeyEvent>
#include <qlineedit.h>
#include <qstring.h>
#include <qdebug.h>
#include <cxxmidi/output/default.hpp>
#include <cxxmidi/player/asynchronous.hpp>
#include <cxxmidi/file.hpp>
#include <string>

int tempo = 120;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString str;
    ui->bpmText->setText(str.setNum(tempo));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionVersion_triggered()
{
    VersionWindow verWin;
    verWin.setModal(true);
    verWin.exec();
}

void MainWindow::on_actionExit_triggered(){
    QApplication::quit();
}

void MainWindow::on_actionRead_Me_triggered(){
    QProcess::execute("notepad.exe readme.txt");
}

void playMidi() {
    CxxMidi::Output::Default output(0);
    output.openPort(0);
    CxxMidi::File file("Alleycat.mid");   //bpm = 62
    CxxMidi::Player::Asynchronous player(&output);

    player.setFile(&file);
    //tempo = &file.duration().toTimecode();
    QString str = QString::fromStdString(file.tempo());
    int bpm = (60 * 1000000) / std::stoi(file.tempo());
    qDebug() << str;
    tempo = bpm;
    qDebug() << tempo;
    //MainWindow temp;
    //str = str.setNum(tempo);
    //temp.bpmText->setText(str);
    
    player.play();
    std::this_thread::sleep_for(std::chrono::seconds(3));
    player.pause();
}

void MainWindow::on_actionPlay_Region_triggered() {
    playMidi();
    QString str;
    this->ui->bpmText->setText(str.setNum(tempo));
}

void MainWindow::keyPressEvent(QKeyEvent* event)
{
    if (event->key() == Qt::Key_F1) {
        QProcess::execute("notepad.exe readme.txt");
    }
}


