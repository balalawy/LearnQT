#include "CheckBox.h"

CheckBox::CheckBox(QWidget* parent)
	:QWidget(parent)
{
	//  A shortcut key can be specified by preceding the preferred character with an ampersand
	QCheckBox* checkbox = new QCheckBox("C&ase sensitive", this);
	
	// LAMADA表达式可以通过签名来访问接收者
	// slot函数则需要通过QObject::sender()来访问接收者
	connect(checkbox, &QCheckBox::stateChanged, this, [=]() {
		qDebug() << "state changed";
		if (checkbox->isChecked()) {
			qDebug() << "is checked";
		}
		else {
			qDebug() << "no checked";
		}
	});

	// TODO QCheckBox信号stateChanged无法被处理
	//connect(checkbox, SIGNAL(stateChanged(int)), SLOT(checkState2()));
}


void CheckBox::checkState2()
{
	// QCheckBox* check = (QCheckBox*)sender();
	qDebug() << "state changed";
}