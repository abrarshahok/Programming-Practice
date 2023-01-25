#ifndef MESSAGE_BOX_H
#define MESSAGE_BOX_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Message_Box; }
QT_END_NAMESPACE

class Message_Box : public QMainWindow
{
    Q_OBJECT

public:
    Message_Box(QWidget *parent = nullptr);
    ~Message_Box();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Message_Box *ui;
};
#endif // MESSAGE_BOX_H
