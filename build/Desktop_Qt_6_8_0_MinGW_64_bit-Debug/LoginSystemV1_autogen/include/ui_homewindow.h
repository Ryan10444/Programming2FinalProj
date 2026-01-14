/********************************************************************************
** Form generated from reading UI file 'homewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEWINDOW_H
#define UI_HOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QPushButton *pushButton_logOut;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_notepad;
    QPushButton *pushButton_clock;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(743, 604);
        Dialog->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 249, 231);"));
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(6, 6, 131, 19));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Franklin Gothic Medium")});
        font.setPointSize(16);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pushButton_logOut = new QPushButton(Dialog);
        pushButton_logOut->setObjectName("pushButton_logOut");
        pushButton_logOut->setGeometry(QRect(620, 10, 115, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_logOut->sizePolicy().hasHeightForWidth());
        pushButton_logOut->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(18);
        pushButton_logOut->setFont(font1);
        pushButton_logOut->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 70, 351, 171));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_notepad = new QPushButton(layoutWidget);
        pushButton_notepad->setObjectName("pushButton_notepad");
        sizePolicy1.setHeightForWidth(pushButton_notepad->sizePolicy().hasHeightForWidth());
        pushButton_notepad->setSizePolicy(sizePolicy1);
        pushButton_notepad->setFont(font1);
        pushButton_notepad->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(pushButton_notepad, 0, 1, 1, 1);

        pushButton_clock = new QPushButton(layoutWidget);
        pushButton_clock->setObjectName("pushButton_clock");
        sizePolicy1.setHeightForWidth(pushButton_clock->sizePolicy().hasHeightForWidth());
        pushButton_clock->setSizePolicy(sizePolicy1);
        pushButton_clock->setFont(font1);
        pushButton_clock->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(pushButton_clock, 0, 2, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Home", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Welcome:", nullptr));
        pushButton_logOut->setText(QCoreApplication::translate("Dialog", "Log out", nullptr));
        pushButton_notepad->setText(QCoreApplication::translate("Dialog", "Notepad", nullptr));
        pushButton_clock->setText(QCoreApplication::translate("Dialog", "Clock", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEWINDOW_H
