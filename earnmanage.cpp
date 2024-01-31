#include "earnmanage.h"
#include "ui_earnmanage.h"

EarnManage::EarnManage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EarnManage)
{
    ui->setupUi(this);
}

EarnManage::~EarnManage()
{
    delete ui;
}

