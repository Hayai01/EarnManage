#ifndef EARNMANAGE_H
#define EARNMANAGE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class EarnManage; }
QT_END_NAMESPACE

class EarnManage : public QMainWindow
{
    Q_OBJECT

public:
    EarnManage(QWidget *parent = nullptr);
    ~EarnManage();

private:
    Ui::EarnManage *ui;
};
#endif // EARNMANAGE_H
