#include "FormLayout.h"

FormLayout::FormLayout(QWidget* parent)
	:QWidget(parent)
{
	QFormLayout* layout = new QFormLayout;
	this->setLayout(layout);
	layout->addRow("name:", new QLineEdit());
	layout->addRow("age:", new QLineEdit());
	layout->addRow("sex:", new QPushButton("sex"));
}