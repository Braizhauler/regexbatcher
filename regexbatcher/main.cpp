#include "regexbatcher.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	regexbatcher w;
	w.show();
	return a.exec();
}
