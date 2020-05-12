#include "LayoutLearn.h"
#include "HBoxLayout.h"
#include "VBoxLayout.h"
#include "GridLayout.h"
#include "FormLayout.h"
#include "AddressBook.h"
#include "CardLayout.h"

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


// 布局案例: Cards
void layoutDemo_Cards()
{
	QWidget* window = new QWidget;

	QPushButton* button1 = new QPushButton("button1");
	QPushButton* button2 = new QPushButton("button2");
	QPushButton* button3 = new QPushButton("button3");

	CardLayout* layout = new CardLayout(window);
	layout->addWidget(button1);
	layout->addWidget(button2);
	layout->addWidget(button3);

	//QRect rect(0, 0, 600, 600);
	//layout->setGeometry(rect);
	layout->setSpacing(0);  // set the layoutitem's spacing

	window->show();
}


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	// learnLayout();  // 学习布局

	// layoutDemo_AddressBook();  // 布局案例：AddressBook

	layoutDemo_Cards();  // 布局案例: Cards

	return a.exec();
}
