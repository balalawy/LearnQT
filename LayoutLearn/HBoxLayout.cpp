#include "HBoxLayout.h"


HBoxLayout::HBoxLayout(QWidget* parent)
	:QWidget(parent)
{
	button1 = new QPushButton("one");
	button2 = new QPushButton("two");
	button3 = new QPushButton("three");
	button4 = new QPushButton("four");
	button5 = new QPushButton("five");

	layout = new QHBoxLayout;
	layout->addWidget(button1);
	layout->addWidget(button2);
	layout->addWidget(button3);
	layout->addWidget(button4);
	layout->addWidget(button5);

	this->setLayout(layout);
}