#include "widget.h"
#include "ui_widget.h"
#include<QDataStream>
#include<QMessageBox>
#include<QDateTime>
#include <stdio.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include "C:\Users\Administrator\Desktop\c_library_v2-master\common\mavlink.h"
#pragma comment(lib,"ws2_32.lib")
#include <iostream>
#include<stdlib.h>
#include <string.h>
#include<QToolButton>
using namespace std;
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    SOCKET socket2;
        //InitWinsock();
        WSADATA wsaData;
        int iErrorCode;
        if (WSAStartup(MAKEWORD(2, 1), &wsaData)) //调用Windows Sockets DLL
        {
            cout << "Winsock无法初始化!" << endl;
            WSACleanup();
            return;
        }

        struct sockaddr_in local;
        struct sockaddr_in to;
        int tolen = sizeof(to);
        local.sin_family = AF_INET;
        local.sin_port = htons(14552); //发送端口
        local.sin_addr.s_addr = INADDR_ANY; ///本机

        socket2 = socket(AF_INET, SOCK_DGRAM, 0);
		bind(socket2, (struct sockaddr*)&local, sizeof(local));
        to.sin_family = AF_INET;
        inet_pton(AF_INET, "192.168.10.131", &to.sin_addr);
        to.sin_port = htons(14550);
        int a;
        int nb_send;
        connect(ui->takeoffButton, &QPushButton::clicked,[=](){
            cout << "mavlink_msg_command_long_pack " << endl;
            cout << "\r\n " << endl;
            QString text = ui->takeoffEdit->toPlainText();
            bool ok;
            int tmp = text.toInt(&ok);
			mavlink_message_t msg;
			uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
			memset(buffer, 0, MAVLINK_MAX_PACKET_LEN);
            memset(&msg, 0, sizeof(msg));
            mavlink_msg_command_long_pack(1, 1, &msg, 1, 1, MAV_CMD_NAV_TAKEOFF, 0, 20, 0, 0, 30, -35.363262, 149.165237, tmp);
            int msg_len = mavlink_msg_to_send_buffer(buffer, &msg);
            if (msg_len < 0) {
                fprintf(stderr, "ERROR: in rc_mav_send_msg, unable to pack message for sending\n");
            }
            sendto(socket2, (char*)buffer, MAVLINK_MAX_PACKET_LEN, 0, (struct sockaddr*)&to, tolen);
        });
        connect(ui->armButton, &QPushButton::clicked,[=](){
            cout << "mavlink_msg_command_long_pack " << endl;
            cout << "\r\n " << endl;
            mavlink_message_t msg;
            uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
            memset(buffer, 0, MAVLINK_MAX_PACKET_LEN);
            memset(&msg, 0, sizeof(msg));
            mavlink_msg_command_long_pack(100, 200, &msg, 1, 1, MAV_CMD_COMPONENT_ARM_DISARM, 0, 1, 0, 0, 0 ,0 ,0 ,0);
            int msg_len = mavlink_msg_to_send_buffer(buffer, &msg);
            if (msg_len < 0) {
                    fprintf(stderr, "ERROR: in rc_mav_send_msg, unable to pack message for sending\n");
            }
            sendto(socket2, (char*)buffer, MAVLINK_MAX_PACKET_LEN, 0, (struct sockaddr*)&to, tolen);
        });
        connect(ui->landButton, &QPushButton::clicked,[=](){
            cout << "mavlink_msg_command_long_pack " << endl;
            cout << "\r\n " << endl;
            mavlink_message_t msg;
            uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
            memset(buffer, 0, MAVLINK_MAX_PACKET_LEN);
            memset(&msg, 0, sizeof(msg));
            mavlink_msg_command_long_pack(1, 1, &msg, 1, 1, MAV_CMD_NAV_LAND, 0, 0, 0, 0, NAN , -35.363262, 149.165237, 0);
            int msg_len = mavlink_msg_to_send_buffer(buffer, &msg);
            if (msg_len < 0) {
                    fprintf(stderr, "ERROR: in rc_mav_send_msg, unable to pack message for sending\n");
            }
            sendto(socket2, (char*)buffer, MAVLINK_MAX_PACKET_LEN, 0, (struct sockaddr*)&to, tolen);
         });
        connect(ui->guidedButton, &QPushButton::clicked,[=](){
            cout << "mavlink_msg_command_long_pack " << endl;
            cout << "\r\n " << endl;
            mavlink_message_t msg;
            uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
            memset(buffer, 0, MAVLINK_MAX_PACKET_LEN);
            memset(&msg, 0, sizeof(msg));
            mavlink_msg_command_long_pack(1, 1, &msg, 1, 1, MAV_CMD_DO_SET_MODE, 216, 1, 4, 0, 0 , 0, 0, 0);
            int msg_len = mavlink_msg_to_send_buffer(buffer, &msg);
            if (msg_len < 0) {
                    fprintf(stderr, "ERROR: in rc_mav_send_msg, unable to pack message for sending\n");
            }
            sendto(socket2, (char*)buffer, MAVLINK_MAX_PACKET_LEN, 0, (struct sockaddr*)&to, tolen);
         });
        connect(ui->stabilizeButton, &QPushButton::clicked,[=](){
            cout << "mavlink_msg_command_long_pack " << endl;
            cout << "\r\n " << endl;
            mavlink_message_t msg;
            uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
            memset(buffer, 0, MAVLINK_MAX_PACKET_LEN);
            memset(&msg, 0, sizeof(msg));
            mavlink_msg_command_long_pack(1, 1, &msg, 1, 1, MAV_CMD_DO_SET_MODE, 216, 1, 0, 0, 0 , 0, 0, 0);
            int msg_len = mavlink_msg_to_send_buffer(buffer, &msg);
            if (msg_len < 0) {
                    fprintf(stderr, "ERROR: in rc_mav_send_msg, unable to pack message for sending\n");
            }
            sendto(socket2, (char*)buffer, MAVLINK_MAX_PACKET_LEN, 0, (struct sockaddr*)&to, tolen);
         });
        connect(ui->autoButton, &QPushButton::clicked,[=](){
            cout << "mavlink_msg_command_long_pack " << endl;
            cout << "\r\n " << endl;
            mavlink_message_t msg;
            uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
            memset(buffer, 0, MAVLINK_MAX_PACKET_LEN);
            memset(&msg, 0, sizeof(msg));
            mavlink_msg_command_long_pack(1, 1, &msg, 1, 1, MAV_CMD_DO_SET_MODE, 216, 1, 3, 0, 0 , 0, 0, 0);
            int msg_len = mavlink_msg_to_send_buffer(buffer, &msg);
            if (msg_len < 0) {
                    fprintf(stderr, "ERROR: in rc_mav_send_msg, unable to pack message for sending\n");
            }
            sendto(socket2, (char*)buffer, MAVLINK_MAX_PACKET_LEN, 0, (struct sockaddr*)&to, tolen);
         });


}

Widget::~Widget()
{
    delete ui;
}

