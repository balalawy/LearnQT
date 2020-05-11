#include "LayoutLearn.h"
#include "HBoxLayout.h"
#include "VBoxLayout.h"
#include "GridLayout.h"
#include "FormLayout.h"
#include "AddressBook.h"

#include <QtWidgets/QApplication>


// ѧϰ����
void learnLayout()
{
	// ˮƽ����
	HBoxLayout* hBoxLayoutDemo = new HBoxLayout;
	hBoxLayoutDemo->show();

	// ��ֱ����
	VBoxLayout* vBoxLayoutDemo = new VBoxLayout;
	vBoxLayoutDemo->show();

	// ���񲼾�
	GridLayout* gridLayoutDemo = new GridLayout;
	gridLayoutDemo->show();

	// ��񲼾�
	FormLayout* formLayoutDemo = new FormLayout;
	formLayoutDemo->show();
}


// ���ְ�����AddressBook
void layoutDemo_AddressBook()
{
	AddressBook* addressbook = new AddressBook;
	addressbook->show();
}


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	// learnLayout();  // ѧϰ����

	layoutDemo_AddressBook();  // ���ְ�����AddressBook

	return a.exec();
}
