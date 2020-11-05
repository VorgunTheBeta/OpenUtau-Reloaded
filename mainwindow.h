#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qlineedit.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QLineEdit *bpmText;


private slots:
    void on_actionVersion_triggered();
    void on_actionExit_triggered();
    void on_actionRead_Me_triggered();
    void on_actionPlay_Region_triggered();

    void keyPressEvent(QKeyEvent* event);

private:
    Ui::MainWindow* ui;
};
#endif // MAINWINDOW_H
