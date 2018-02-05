#include "regexbatcherwindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication application(argc, argv);
	regexbatcherwindow window;
	window.show();
	return application.exec();
}