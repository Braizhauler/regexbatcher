#ifndef REGEXBATCHER_H
#define REGEXBATCHER_H

#include <QtWidgets/QMainWindow>
#include "ui_regexbatcher.h"

class regexbatcher : public QMainWindow
{
	Q_OBJECT

public:
	regexbatcher(QWidget *parent = 0);
	~regexbatcher();

private:
	Ui::regexbatcherClass ui;
};

#endif // REGEXBATCHER_H
