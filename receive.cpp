#include <stdio.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include "C:\Users\Administrator\Desktop\c_library_v2-master\common\mavlink.h"
#pragma comment(lib,"ws2_32.lib")
#include <iostream>
#include<stdlib.h>
#include <string.h>
#include "receive.h"
#include "ui_receive.h"
#include<QToolButton>
#include <QUdpSocket>
#include <QNetworkDatagram>
#include <QHostAddress>
#include <QDebug>
#include <QEventLoop>
#include <QTimer>
using namespace std;
receive::receive(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::receive)
{
    ui->setupUi(this);
    udpSocket = new QUdpSocket(this);

       if(!udpSocket->bind(QHostAddress("192.168.3.8"), 14552)){

           qDebug() << "bind failed! The assert will be triggred!";
           Q_ASSERT(!"bind failed!");
       }

       connect(ui->startButton,&QPushButton::clicked,[=](){
                   //弹出聊天对话框
                   dataReceived();

       });


}


receive::~receive()
{
    delete ui;
}
void receive::dataReceived()
{
        while(udpSocket->hasPendingDatagrams())  //有未处理的报文
            {
                QByteArray recvMsg;
                mavlink_message_t message;
                mavlink_status_t status;
                qDebug()<<udpSocket->pendingDatagramSize();
                recvMsg.resize(udpSocket->pendingDatagramSize());
                udpSocket->readDatagram(recvMsg.data(),recvMsg.size());
                char *buffer = recvMsg.data();
                if (recvMsg.size() > 0)
                {
                    for (int i = 0; i < recvMsg.size(); i++)
                    {
                        if (mavlink_parse_char(MAVLINK_COMM_0, buffer[i], &message, &status))
                        {
                            //printf("received message with id %d,sequence %d,from component %d of system %d!\n", message.msgid, message.seq, message.compid, message.sysid);
                            //在这里解析消息或者在另外的线程中处理。
                                    switch (message.msgid) {
                                    case MAVLINK_MSG_ID_HEARTBEAT:
                                    {
                                        mavlink_heartbeat_t heartbeat;
                                        mavlink_msg_heartbeat_decode(&message, &heartbeat);
                                       //printf("type: %d autopilot: %d base_mode: %d custom_mode: %d system_status: %d mavlink_version: %d\n", heartbeat.type, heartbeat.autopilot,heartbeat.base_mode,heartbeat.custom_mode,heartbeat.system_status,heartbeat.mavlink_version);
                                        //printf("received message with id %d,sequence %d,from component %d of system %d!\n", message.msgid, message.seq, message.compid, message.sysid);
                                        ui->receiveBrowser->append("heartbeat.type:");
                                        ui->receiveBrowser->append(QString::number(heartbeat.type,10)+'\n');


                                    }
                                    break;
                                    case MAVLINK_MSG_ID_GLOBAL_POSITION_INT: // ID for GLOBAL_POSITION_INT
                                    {
                                        // Get all fields in payload (into global_position)
                                        mavlink_global_position_int_t global_position;
                                        mavlink_msg_global_position_int_decode(&message, &global_position);
                                        ui->receiveBrowser->append("global_position.lat:");
                                        ui->receiveBrowser->append(QString::number(global_position.lat,10)+'\n');


                                        //printf("lat:%d\n lon:%d\n alt:%d\n vx:%d vy:%d vz:%d", global_position.lat, global_position.lon,global_position.alt, global_position.vx, global_position.vy, global_position.vz);

                                    }
                                    break;

                                    default:
                                        break;
                                }

                        }
                    }
                }


            }
}
