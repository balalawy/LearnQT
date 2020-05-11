#include "GridLayout.h"

GridLayout::GridLayout(QWidget* parent)
	:QWidget(parent)
{
	QPushButton* button1 = new QPushButton("button1");
	QPushButton* button2 = new QPushButton("button2");
	QPushButton* button3 = new QPushButton("button3");
	QPushButton* button4 = new QPushButton("button4");

	QGridLayout* layout = new QGridLayout(this);
	layout->addWidget(button1, 0, 0);
	layout->addWidget(button2, 0, 1);
	layout->addWidget(button3, 1, 0);
	layout->addWidget(button4, 1, 1);

	layout->setColumnMinimumWidth(0, 160);
	layout->setColumnMinimumWidth(1, 160);
	layout->setRowMinimumHeight(0, 160);
	layout->setRowMinimumHeight(1, 160);

	layout->setRowStretch(0, 1);		//设置行列比例系数
	layout->setRowStretch(1, 3);
	layout->setColumnStretch(0, 1);
	layout->setColumnStretch(1, 3);
}