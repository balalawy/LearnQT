#include "LayoutLearn.h"
#include "HBoxLayout.h"
#include "VBoxLayout.h"
#include "GridLayout.h"
#include "FormLayout.h"
#include "AddressBook.h"

#include <QtWidgets/QApplication>


// 学习布局
void learnLayout()
{
	// 水平布局
	HBoxLayout* hBoxLayoutDemo = new HBoxLayout;
	hBoxLayoutDemo->show();

	// 垂直布局
	VBoxLayout* vBoxLayoutDemo = new VBoxLayout;
	vBoxLayoutDemo->show();

	// 网格布局
	GridLayout* gridLayoutDemo = new GridLayout;
	gridLayoutDemo->show();

	// 表格布局
	FormLayout* formLayoutDemo = new FormLayout;
	formLayoutDemo->show();
}


// 布局案例：AddressBook
void layoutDemo_AddressBook()
{
	AddressBook* addressbook = new AddressBook;
	addressbook->show();
}


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	// learnLayout();  // 学习布局

	layoutDemo_AddressBook();  // 布局案例：AddressBook

	return a.exec();
}
