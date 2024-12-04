/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_notepad
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_notepadback;
    QPushButton *pushButton_notepadNew;
    QPushButton *pushButton_notepadOpen;
    QPushButton *pushButton_notepadsave;
    QTextEdit *textEdit;

    void setupUi(QDialog *notepad)
    {
        if (notepad->objectName().isEmpty())
            notepad->setObjectName("notepad");
        notepad->resize(540, 475);
        notepad->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(194, 144, 74);"));
        layoutWidget = new QWidget(notepad);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 20, 501, 441));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_notepadback = new QPushButton(layoutWidget);
        pushButton_notepadback->setObjectName("pushButton_notepadback");
        pushButton_notepadback->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(pushButton_notepadback);

        pushButton_notepadNew = new QPushButton(layoutWidget);
        pushButton_notepadNew->setObjectName("pushButton_notepadNew");
        pushButton_notepadNew->setAutoFillBackground(false);
        pushButton_notepadNew->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(pushButton_notepadNew);

        pushButton_notepadOpen = new QPushButton(layoutWidget);
        pushButton_notepadOpen->setObjectName("pushButton_notepadOpen");
        pushButton_notepadOpen->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(pushButton_notepadOpen);

        pushButton_notepadsave = new QPushButton(layoutWidget);
        pushButton_notepadsave->setObjectName("pushButton_notepadsave");
        pushButton_notepadsave->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(pushButton_notepadsave);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName("textEdit");
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 249, 231);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(textEdit);


        retranslateUi(notepad);

        QMetaObject::connectSlotsByName(notepad);
    } // setupUi

    void retranslateUi(QDialog *notepad)
    {
        notepad->setWindowTitle(QCoreApplication::translate("notepad", "Notepad", nullptr));
        pushButton_notepadback->setText(QCoreApplication::translate("notepad", "Back to Home", nullptr));
        pushButton_notepadNew->setText(QCoreApplication::translate("notepad", "New Note", nullptr));
        pushButton_notepadOpen->setText(QCoreApplication::translate("notepad", "Open Note", nullptr));
        pushButton_notepadsave->setText(QCoreApplication::translate("notepad", "Save Note", nullptr));
    } // retranslateUi

};

namespace Ui {
    class notepad: public Ui_notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
