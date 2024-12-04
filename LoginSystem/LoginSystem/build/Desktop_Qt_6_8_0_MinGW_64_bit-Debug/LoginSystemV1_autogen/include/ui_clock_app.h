/********************************************************************************
** Form generated from reading UI file 'clock_app.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOCK_APP_H
#define UI_CLOCK_APP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_clock_app
{
public:
    QLabel *label_timeEST;
    QPushButton *pushButton_back;

    void setupUi(QDialog *clock_app)
    {
        if (clock_app->objectName().isEmpty())
            clock_app->setObjectName("clock_app");
        clock_app->resize(470, 331);
        label_timeEST = new QLabel(clock_app);
        label_timeEST->setObjectName("label_timeEST");
        label_timeEST->setGeometry(QRect(50, 70, 381, 181));
        QFont font;
        font.setPointSize(72);
        label_timeEST->setFont(font);
        pushButton_back = new QPushButton(clock_app);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setGeometry(QRect(20, 20, 121, 31));
        QFont font1;
        font1.setPointSize(12);
        pushButton_back->setFont(font1);
        pushButton_back->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        retranslateUi(clock_app);

        QMetaObject::connectSlotsByName(clock_app);
    } // setupUi

    void retranslateUi(QDialog *clock_app)
    {
        clock_app->setWindowTitle(QCoreApplication::translate("clock_app", "Clock App", nullptr));
        label_timeEST->setText(QCoreApplication::translate("clock_app", "EST", nullptr));
        pushButton_back->setText(QCoreApplication::translate("clock_app", "Back to home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class clock_app: public Ui_clock_app {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOCK_APP_H
