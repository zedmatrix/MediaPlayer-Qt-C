/********************************************************************************
** Form generated from reading UI file 'mainwindowXizEEd.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINWINDOWXIZEED_H
#define MAINWINDOWXIZEED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *downtown;
    QPushButton *classic;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(400, 300);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        downtown = new QPushButton(centralwidget);
        downtown->setObjectName("downtown");
        downtown->setGeometry(QRect(10, 20, 100, 22));
        classic = new QPushButton(centralwidget);
        classic->setObjectName("classic");
        classic->setGeometry(QRect(10, 60, 100, 22));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        downtown->setText(QCoreApplication::translate("MainWindow", "Downtown 97.7", nullptr));
        classic->setText(QCoreApplication::translate("MainWindow", "Absolute Classic", nullptr));
        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINWINDOWXIZEED_H
