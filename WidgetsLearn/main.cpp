#include "WidgetsLearn.h"
#include <QtWidgets/QApplication>

#include "CheckBox.h"
#include "ComboBox.h"
#include "Label.h"


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


void Label_Demo()
{
	Label* label = new Label;
	label->show();
}


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	// checkBox_Demo();	// ��ѡ��QCheckBox
	// comboBox_Demo(); // ��Ͽ�QComboBox
	Label_Demo();	// ��ǩQLabel

	return a.exec();
}
