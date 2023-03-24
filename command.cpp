#include "command.h"
#include "ui_command.h"
#include"widget.h"
#include<QToolButton>
#include "receive.h"
#include <stdio.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include "C:\Users\Administrator\Desktop\c_library_v2-master\common\mavlink.h"
#pragma comment(lib,"ws2_32.lib")
#include <iostream>
#include<stdlib.h>
#include <string.h>
command::command(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::command)
{
    ui->setupUi(this);
    setWindowTitle("CONSOLE");
        //设置图标
    connect(ui->sendButton,&QPushButton::clicked,[=](){
                //弹出聊天对话框
                Widget* widget = new Widget();
                //窗口进行显示
                widget->show();


    });
    connect(ui->receiveButton,&QPushButton::clicked,[=](){
                //弹出聊天对话框
                receive* rece = new receive();
                //窗口进行显示
                rece->show();

    });
}

command::~command()
{
    delete ui;
}
