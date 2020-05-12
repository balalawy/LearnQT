#include "CheckBox.h"

CheckBox::CheckBox(QWidget* parent)
	:QWidget(parent)
{
	//  A shortcut key can be specified by preceding the preferred character with an ampersand
	QCheckBox* checkbox = new QCheckBox("C&ase sensitive", this);
	
	connect(checkbox, &QCheckBox::stateChanged, this, [=]() {
		qDebug() << "state changed";
	});

	// TODO QCheckBox信号stateChanged无法被处理
	//connect(checkbox, SIGNAL(stateChanged(int)), SLOT(checkState2()));
}


void CheckBox::checkState2()
{
	// QCheckBox* check = (QCheckBox*)sender();
	qDebug() << "state changed";
}