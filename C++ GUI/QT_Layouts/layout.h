#ifndef LAYOUT_H
#define LAYOUT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Layout; }
QT_END_NAMESPACE

class Layout : public QMainWindow
{
    Q_OBJECT

public:
    Layout(QWidget *parent = nullptr);
    ~Layout();

private:
    Ui::Layout *ui;
};
#endif // LAYOUT_H
