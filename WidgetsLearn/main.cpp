#include "WidgetsLearn.h"
#include <QtWidgets/QApplication>

#include "CheckBox.h"
#include "ComboBox.h"


void checkBox_Demo()
{
	CheckBox* w = new CheckBox;
	w->show();
}


void comboBox_Demo()
{
	ComboBox* c = new ComboBox;
	c->show();
}


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	// checkBox_Demo();	// ¸´Ñ¡¿òQCheckBox
	comboBox_Demo();

	return a.exec();
}
