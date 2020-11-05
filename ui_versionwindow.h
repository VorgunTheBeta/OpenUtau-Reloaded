/********************************************************************************
** Form generated from reading UI file 'versionwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERSIONWINDOW_H
#define UI_VERSIONWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_VersionWindow
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *VersionNumber;
    QLabel *label;

    void setupUi(QDialog *VersionWindow)
    {
        if (VersionWindow->objectName().isEmpty())
            VersionWindow->setObjectName(QString::fromUtf8("VersionWindow"));
        VersionWindow->resize(372, 126);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Utau_logo_large.png"), QSize(), QIcon::Normal, QIcon::Off);
        VersionWindow->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(VersionWindow);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(20, 80, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        VersionNumber = new QLabel(VersionWindow);
        VersionNumber->setObjectName(QString::fromUtf8("VersionNumber"));
        VersionNumber->setGeometry(QRect(10, 60, 351, 16));
        VersionNumber->setScaledContents(true);
        label = new QLabel(VersionWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 221, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Bahnschrift"));
        font.setPointSize(18);
        label->setFont(font);

        retranslateUi(VersionWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), VersionWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), VersionWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(VersionWindow);
    } // setupUi

    void retranslateUi(QDialog *VersionWindow)
    {
        VersionWindow->setWindowTitle(QCoreApplication::translate("VersionWindow", "Version - OpenUtau Reloaded", nullptr));
        VersionNumber->setText(QCoreApplication::translate("VersionWindow", "This should never be seen", nullptr));
        label->setText(QCoreApplication::translate("VersionWindow", "OpenUtau Reloaded", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VersionWindow: public Ui_VersionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERSIONWINDOW_H
