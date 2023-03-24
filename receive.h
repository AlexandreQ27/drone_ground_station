#ifndef RECEIVE_H
#define RECEIVE_H

#include <QWidget>
#include <QUdpSocket>
#include <QNetworkDatagram>
#include <QHostAddress>
#include <QDebug>
#include <QEventLoop>
#include <QTimer>
namespace Ui {
class receive;
}

class receive : public QWidget
{
    Q_OBJECT

public:
    explicit receive(QWidget *parent = nullptr);
    ~receive();
public slots:
    void dataReceived();

private:
    Ui::receive *ui;
    QUdpSocket *udpSocket;

};
#endif // RECEIVE_H
