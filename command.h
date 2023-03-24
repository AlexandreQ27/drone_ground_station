#ifndef COMMAND_H
#define COMMAND_H

#include <QWidget>

namespace Ui {
class command;
}

class command : public QWidget
{
    Q_OBJECT

public:
    explicit command(QWidget *parent = nullptr);
    ~command();

private:
    Ui::command *ui;
};

#endif // COMMAND_H
