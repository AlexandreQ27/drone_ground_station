/********************************************************************************
** Form generated from reading UI file 'receive.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIVE_H
#define UI_RECEIVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_receive
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *receiveBrowser;
    QPushButton *refreshButton;
    QPushButton *startButton;

    void setupUi(QWidget *receive)
    {
        if (receive->objectName().isEmpty())
            receive->setObjectName(QString::fromUtf8("receive"));
        receive->resize(400, 300);
        verticalLayout = new QVBoxLayout(receive);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        receiveBrowser = new QTextBrowser(receive);
        receiveBrowser->setObjectName(QString::fromUtf8("receiveBrowser"));

        verticalLayout->addWidget(receiveBrowser);

        refreshButton = new QPushButton(receive);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));
        refreshButton->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(refreshButton);

        startButton = new QPushButton(receive);
        startButton->setObjectName(QString::fromUtf8("startButton"));

        verticalLayout->addWidget(startButton);


        retranslateUi(receive);

        QMetaObject::connectSlotsByName(receive);
    } // setupUi

    void retranslateUi(QWidget *receive)
    {
        receive->setWindowTitle(QCoreApplication::translate("receive", "Form", nullptr));
        refreshButton->setText(QCoreApplication::translate("receive", "refresh", nullptr));
        startButton->setText(QCoreApplication::translate("receive", "start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class receive: public Ui_receive {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIVE_H
