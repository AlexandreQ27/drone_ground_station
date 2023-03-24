/********************************************************************************
** Form generated from reading UI file 'command.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMAND_H
#define UI_COMMAND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_command
{
public:
    QVBoxLayout *verticalLayout;
    QToolBox *toolBox;
    QWidget *page;
    QVBoxLayout *vLayout;
    QPushButton *receiveButton;
    QPushButton *sendButton;
    QPushButton *outButton;

    void setupUi(QWidget *command)
    {
        if (command->objectName().isEmpty())
            command->setObjectName(QString::fromUtf8("command"));
        command->resize(470, 464);
        verticalLayout = new QVBoxLayout(command);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        toolBox = new QToolBox(command);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 452, 423));
        vLayout = new QVBoxLayout(page);
        vLayout->setObjectName(QString::fromUtf8("vLayout"));
        receiveButton = new QPushButton(page);
        receiveButton->setObjectName(QString::fromUtf8("receiveButton"));
        receiveButton->setCursor(QCursor(Qt::PointingHandCursor));

        vLayout->addWidget(receiveButton);

        sendButton = new QPushButton(page);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setCursor(QCursor(Qt::PointingHandCursor));

        vLayout->addWidget(sendButton);

        outButton = new QPushButton(page);
        outButton->setObjectName(QString::fromUtf8("outButton"));

        vLayout->addWidget(outButton);

        toolBox->addItem(page, QString::fromUtf8("\346\216\247\345\210\266\345\217\260"));

        verticalLayout->addWidget(toolBox);


        retranslateUi(command);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(command);
    } // setupUi

    void retranslateUi(QWidget *command)
    {
        command->setWindowTitle(QCoreApplication::translate("command", "Form", nullptr));
#if QT_CONFIG(tooltip)
        receiveButton->setToolTip(QCoreApplication::translate("command", "connect", nullptr));
#endif // QT_CONFIG(tooltip)
        receiveButton->setText(QCoreApplication::translate("command", "receive", nullptr));
#if QT_CONFIG(tooltip)
        sendButton->setToolTip(QCoreApplication::translate("command", "exit", nullptr));
#endif // QT_CONFIG(tooltip)
        sendButton->setText(QCoreApplication::translate("command", "send", nullptr));
        outButton->setText(QCoreApplication::translate("command", "exit", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("command", "\346\216\247\345\210\266\345\217\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class command: public Ui_command {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMAND_H
