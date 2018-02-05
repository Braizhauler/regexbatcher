#ifndef REGEXBATCHER_H
#define REGEXBATCHER_H

#include <QtWidgets/QMainWindow>
#include "ui_regexbatcherwindow.h"

class regexbatcherwindow : public QMainWindow
{
	Q_OBJECT

public:
	regexbatcherwindow(QWidget *parent = 0);
	~regexbatcherwindow();
private slots:
	void on_btnCopyText_clicked();

private:
	Ui::regexbatcherClass * ui;
};

#endif // REGEXBATCHER_H