/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTextBrowser *textBrowser;
    QPushButton *exitButton;
    QTextEdit *takeoffEdit;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *armButton;
    QPushButton *takeoffButton;
    QPushButton *landButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(461, 392);
        textBrowser = new QTextBrowser(Widget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(80, 170, 291, 192));
        exitButton = new QPushButton(Widget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(340, 43, 112, 91));
        takeoffEdit = new QTextEdit(Widget);
        takeoffEdit->setObjectName(QString::fromUtf8("takeoffEdit"));
        takeoffEdit->setGeometry(QRect(190, 70, 107, 31));
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 20, 114, 134));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        armButton = new QPushButton(widget);
        armButton->setObjectName(QString::fromUtf8("armButton"));

        verticalLayout->addWidget(armButton);

        takeoffButton = new QPushButton(widget);
        takeoffButton->setObjectName(QString::fromUtf8("takeoffButton"));

        verticalLayout->addWidget(takeoffButton);

        landButton = new QPushButton(widget);
        landButton->setObjectName(QString::fromUtf8("landButton"));

        verticalLayout->addWidget(landButton);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        exitButton->setText(QCoreApplication::translate("Widget", "exit", nullptr));
        armButton->setText(QCoreApplication::translate("Widget", "arm", nullptr));
        takeoffButton->setText(QCoreApplication::translate("Widget", "takeoff", nullptr));
        landButton->setText(QCoreApplication::translate("Widget", "land", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
