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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *armButton;
    QPushButton *guidedButton;
    QPushButton *stabilizeButton;
    QPushButton *autoButton;
    QPushButton *takeoffButton;
    QPushButton *landButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(784, 706);
        textBrowser = new QTextBrowser(Widget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(390, 430, 291, 192));
        exitButton = new QPushButton(Widget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(520, 150, 112, 91));
        takeoffEdit = new QTextEdit(Widget);
        takeoffEdit->setObjectName(QString::fromUtf8("takeoffEdit"));
        takeoffEdit->setGeometry(QRect(310, 330, 107, 31));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 30, 211, 431));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        armButton = new QPushButton(layoutWidget);
        armButton->setObjectName(QString::fromUtf8("armButton"));

        verticalLayout->addWidget(armButton);

        guidedButton = new QPushButton(layoutWidget);
        guidedButton->setObjectName(QString::fromUtf8("guidedButton"));

        verticalLayout->addWidget(guidedButton);

        stabilizeButton = new QPushButton(layoutWidget);
        stabilizeButton->setObjectName(QString::fromUtf8("stabilizeButton"));

        verticalLayout->addWidget(stabilizeButton);

        autoButton = new QPushButton(layoutWidget);
        autoButton->setObjectName(QString::fromUtf8("autoButton"));

        verticalLayout->addWidget(autoButton);

        takeoffButton = new QPushButton(layoutWidget);
        takeoffButton->setObjectName(QString::fromUtf8("takeoffButton"));

        verticalLayout->addWidget(takeoffButton);

        landButton = new QPushButton(layoutWidget);
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
        guidedButton->setText(QCoreApplication::translate("Widget", "guided", nullptr));
        stabilizeButton->setText(QCoreApplication::translate("Widget", "stabilize", nullptr));
        autoButton->setText(QCoreApplication::translate("Widget", "auto", nullptr));
        takeoffButton->setText(QCoreApplication::translate("Widget", "takeoff", nullptr));
        landButton->setText(QCoreApplication::translate("Widget", "land", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
