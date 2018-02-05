#include "regexbatcherwindow.h"

regexbatcherwindow::regexbatcherwindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui->setupUi(this);
}

regexbatcherwindow::~regexbatcherwindow()
{

}

void regexbatcherwindow::on_btnCopyText_clicked() {
	ui->txtInspect->setText(ui->txtEdit->toPlainText() );
}