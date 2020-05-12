#include "WidgetsLearn.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	WidgetsLearn w;
	w.show();
	return a.exec();
}
