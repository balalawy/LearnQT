#include "WidgetsLearn.h"
#include <QtWidgets/QApplication>

#include "CheckBox.h"

void checkBox_Demo()
{
	CheckBox w;
	w.show();
}


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	checkBox_Demo();	// ¸´Ñ¡¿òQCheckBox

	return a.exec();
}
