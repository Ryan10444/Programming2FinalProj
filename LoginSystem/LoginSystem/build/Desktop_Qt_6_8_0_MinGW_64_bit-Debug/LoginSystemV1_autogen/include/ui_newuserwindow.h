/********************************************************************************
** Form generated from reading UI file 'newuserwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWUSERWINDOW_H
#define UI_NEWUSERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newuserwindow
{
public:
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_firstname;
    QLineEdit *lineEdit_firstname;
    QLabel *label_lastname;
    QLineEdit *lineEdit_lastname;
    QLabel *label_newusername;
    QLineEdit *lineEdit_newusername;
    QLabel *label_newpassword;
    QLineEdit *lineEdit_newpassword;
    QLineEdit *lineEdit_passconfirm;
    QLabel *label_passconfirm;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_createnew;
    QPushButton *pushButton_cancelnew;

    void setupUi(QDialog *newuserwindow)
    {
        if (newuserwindow->objectName().isEmpty())
            newuserwindow->setObjectName("newuserwindow");
        newuserwindow->resize(743, 608);
        newuserwindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 249, 231);"));
        label = new QLabel(newuserwindow);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 120, 171, 41));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        formLayoutWidget = new QWidget(newuserwindow);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(210, 180, 321, 121));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_firstname = new QLabel(formLayoutWidget);
        label_firstname->setObjectName("label_firstname");
        QFont font1;
        font1.setPointSize(12);
        label_firstname->setFont(font1);
        label_firstname->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_firstname);

        lineEdit_firstname = new QLineEdit(formLayoutWidget);
        lineEdit_firstname->setObjectName("lineEdit_firstname");
        lineEdit_firstname->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_firstname);

        label_lastname = new QLabel(formLayoutWidget);
        label_lastname->setObjectName("label_lastname");
        label_lastname->setFont(font1);
        label_lastname->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_lastname);

        lineEdit_lastname = new QLineEdit(formLayoutWidget);
        lineEdit_lastname->setObjectName("lineEdit_lastname");
        lineEdit_lastname->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_lastname);

        label_newusername = new QLabel(formLayoutWidget);
        label_newusername->setObjectName("label_newusername");
        label_newusername->setFont(font1);
        label_newusername->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_newusername);

        lineEdit_newusername = new QLineEdit(formLayoutWidget);
        lineEdit_newusername->setObjectName("lineEdit_newusername");
        lineEdit_newusername->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_newusername);

        label_newpassword = new QLabel(formLayoutWidget);
        label_newpassword->setObjectName("label_newpassword");
        label_newpassword->setFont(font1);
        label_newpassword->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_newpassword);

        lineEdit_newpassword = new QLineEdit(formLayoutWidget);
        lineEdit_newpassword->setObjectName("lineEdit_newpassword");
        lineEdit_newpassword->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_newpassword->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_newpassword);

        lineEdit_passconfirm = new QLineEdit(formLayoutWidget);
        lineEdit_passconfirm->setObjectName("lineEdit_passconfirm");
        lineEdit_passconfirm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_passconfirm->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_passconfirm);

        label_passconfirm = new QLabel(formLayoutWidget);
        label_passconfirm->setObjectName("label_passconfirm");
        label_passconfirm->setFont(font1);
        label_passconfirm->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_passconfirm);

        horizontalLayoutWidget = new QWidget(newuserwindow);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(210, 300, 321, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_createnew = new QPushButton(horizontalLayoutWidget);
        pushButton_createnew->setObjectName("pushButton_createnew");
        pushButton_createnew->setFont(font1);
        pushButton_createnew->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(pushButton_createnew);

        pushButton_cancelnew = new QPushButton(horizontalLayoutWidget);
        pushButton_cancelnew->setObjectName("pushButton_cancelnew");
        pushButton_cancelnew->setFont(font1);
        pushButton_cancelnew->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(pushButton_cancelnew);


        retranslateUi(newuserwindow);

        QMetaObject::connectSlotsByName(newuserwindow);
    } // setupUi

    void retranslateUi(QDialog *newuserwindow)
    {
        newuserwindow->setWindowTitle(QCoreApplication::translate("newuserwindow", "Sign up", nullptr));
        label->setText(QCoreApplication::translate("newuserwindow", "Create New User", nullptr));
        label_firstname->setText(QCoreApplication::translate("newuserwindow", "First Name:", nullptr));
        label_lastname->setText(QCoreApplication::translate("newuserwindow", "Last Name:", nullptr));
        label_newusername->setText(QCoreApplication::translate("newuserwindow", "Username:", nullptr));
        label_newpassword->setText(QCoreApplication::translate("newuserwindow", "Password:", nullptr));
        label_passconfirm->setText(QCoreApplication::translate("newuserwindow", "Confirm Password:", nullptr));
        pushButton_createnew->setText(QCoreApplication::translate("newuserwindow", "Create", nullptr));
        pushButton_cancelnew->setText(QCoreApplication::translate("newuserwindow", "Back to login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newuserwindow: public Ui_newuserwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWUSERWINDOW_H
