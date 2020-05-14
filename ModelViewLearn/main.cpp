#include "ModelViewLearn.h"
#include <QtWidgets/QApplication>

#include "FileDemo.h"


void fileDemo()
{
	FileDemo* fileDemo = new FileDemo();
	fileDemo->show();
}


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	fileDemo();

	return a.exec();
}
