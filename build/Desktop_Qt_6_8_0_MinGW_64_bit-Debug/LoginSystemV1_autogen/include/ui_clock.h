/********************************************************************************
** Form generated from reading UI file 'clock.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOCK_H
#define UI_CLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_clock
{
public:
    QLabel *label_timeEST;

    void setupUi(QDialog *clock)
    {
        if (clock->objectName().isEmpty())
            clock->setObjectName("clock");
        clock->resize(400, 300);
        label_timeEST = new QLabel(clock);
        label_timeEST->setObjectName("label_timeEST");
        label_timeEST->setGeometry(QRect(130, 110, 121, 51));
        QFont font;
        font.setPointSize(18);
        label_timeEST->setFont(font);

        retranslateUi(clock);

        QMetaObject::connectSlotsByName(clock);
    } // setupUi

    void retranslateUi(QDialog *clock)
    {
        clock->setWindowTitle(QCoreApplication::translate("clock", "Dialog", nullptr));
        label_timeEST->setText(QCoreApplication::translate("clock", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class clock: public Ui_clock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOCK_H
