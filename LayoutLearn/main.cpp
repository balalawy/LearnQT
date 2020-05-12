#include "LayoutLearn.h"
#include "HBoxLayout.h"
#include "VBoxLayout.h"
#include "GridLayout.h"
#include "FormLayout.h"
#include "AddressBook.h"
#include "CardLayout.h"

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


// ���ְ���: Cards
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

	// learnLayout();  // ѧϰ����

	// layoutDemo_AddressBook();  // ���ְ�����AddressBook

	layoutDemo_Cards();  // ���ְ���: Cards

	return a.exec();
}
