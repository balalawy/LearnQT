#include "VBoxLayout.h"

VBoxLayout::VBoxLayout(QWidget* parent)
	:QWidget(parent)
{
    QPushButton* button1 = new QPushButton("One");
    QPushButton* button2 = new QPushButton("Two");
    QPushButton* button3 = new QPushButton("Three");
    QPushButton* button4 = new QPushButton("Four");
    QPushButton* button5 = new QPushButton("Five");

    QVBoxLayout* layout = new QVBoxLayout;
    layout->addWidget(button1);
    layout->addWidget(button2);
    layout->addWidget(button3);
    layout->addWidget(button4);
    layout->addWidget(button5);

    this->setLayout(layout);
}