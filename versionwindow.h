#ifndef VERSIONWINDOW_H
#define VERSIONWINDOW_H

#include <QDialog>
#include <QLabel>
namespace Ui {
class VersionWindow;
}

class VersionWindow : public QDialog
{
    Q_OBJECT

public:
    explicit VersionWindow(QWidget *parent = nullptr);
    ~VersionWindow();
    QLabel *VersionNumber;

private:
    Ui::VersionWindow *ui;
};

#endif // VERSIONWINDOW_H
