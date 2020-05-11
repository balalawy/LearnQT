#include "AddressBook.h"

AddressBook::AddressBook(QWidget* parent)
	:QWidget(parent)
{
	
	QLineEdit* lineEdit = new QLineEdit;
	QTextEdit* textEdit = new QTextEdit;
	QLabel* nameLabel = new QLabel("name:");
	QLabel* addressLabel = new QLabel("address:");

	QPushButton* addBtn = new QPushButton("Add");
	QPushButton* editBtn = new QPushButton("Edit");
	QPushButton* removeBtn = new QPushButton("Remove");
	
	QVBoxLayout* vBoxLayout = new QVBoxLayout;
	vBoxLayout->addWidget(addBtn);
	vBoxLayout->addWidget(editBtn);
	vBoxLayout->addWidget(removeBtn);

	QPushButton* previousBtn = new QPushButton("Previous");
	QPushButton* nextBtn = new QPushButton("Next");

	QHBoxLayout* hBoxLayout = new QHBoxLayout;
	hBoxLayout->addWidget(previousBtn);
	hBoxLayout->addWidget(nextBtn);

	QGridLayout* layout = new QGridLayout(this);
	layout->addWidget(nameLabel, 0, 0);
	layout->addWidget(lineEdit, 0, 1);
	layout->addWidget(addressLabel, 1, 0, Qt::AlignTop);
	layout->addWidget(textEdit, 1, 1);
	layout->addLayout(vBoxLayout, 1, 2, Qt::AlignTop);
	layout->addLayout(hBoxLayout, 2, 1, 1, 1);
	
	this->setWindowTitle("AddressBook");
}