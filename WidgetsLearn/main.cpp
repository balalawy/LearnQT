#include "WidgetsLearn.h"
#include <QtWidgets/QApplication>

#include "CheckBox.h"
#include "ComboBox.h"
#include "Label.h"
#include "LineEdit.h"
#include "Menu.h"


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


void lineEdit_Demo()
{
	LineEdit* edit = new LineEdit;
	edit->show();
}


void menu_Demo()
{
	Menu* menu = new Menu();
	// menu->show();
}


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	// checkBox_Demo();	// ��ѡ��QCheckBox
	// comboBox_Demo(); // ��Ͽ�QComboBox
	// Label_Demo();	// ��ǩQLabel
	// lineEdit_Demo();  // �����ı���QLineText
	menu_Demo();

	return a.exec();
}
