#include "LayoutLearn.h"
#include "HBoxLayout.h"
#include "VBoxLayout.h"
#include "GridLayout.h"
#include "FormLayout.h"
#include "AddressBook.h"
#include "CardLayout.h"
#include "BorderLayout.h"
#include "Calculator.h"

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


// 布局案例: BorderDemo
// 创建一个label控件
QLabel* createLabel(const QString& text)
{
	QLabel* label = new QLabel(text);
	label->setFrameStyle(QFrame::Box | QFrame::Raised);
	return label;
}

void layoutDemo_BorderDemo()
{
	QTextBrowser* centralWidget = new QTextBrowser;
	centralWidget->setPlainText(QObject::tr("Central widget"));

	BorderLayout* layout = new BorderLayout;
	layout->addWidget(centralWidget, BorderLayout::Center);
	layout->addWidget(createLabel("North"), BorderLayout::North);
	layout->addWidget(createLabel("West"), BorderLayout::West);
	layout->addWidget(createLabel("East 1"), BorderLayout::East);
	layout->addWidget(createLabel("East 2"), BorderLayout::East);
	layout->addWidget(createLabel("South"), BorderLayout::South);

	QWidget* window = new QWidget;
	window->setLayout(layout);
	window->show();
}


// 布局案例:Calculator
void layoutDemo_Caluculator()
{
	Calculator* cal = new Calculator;
	cal->setWindowTitle("calculator");
	cal->show();
}


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	// learnLayout();  // 学习布局

	// layoutDemo_AddressBook();  // 布局案例：AddressBook

	// layoutDemo_Cards();  // 布局案例: Cards

	// layoutDemo_BorderDemo();  // 布局案例: BorderDemo

	layoutDemo_Caluculator();

	return a.exec();
}
