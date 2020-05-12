#include "CheckBox.h"

CheckBox::CheckBox(QWidget* parent)
	:QWidget(parent)
{
	//  A shortcut key can be specified by preceding the preferred character with an ampersand
	QCheckBox* checkbox = new QCheckBox("C&ase sensitive", this);
	
	// LAMADA���ʽ����ͨ��ǩ�������ʽ�����
	// slot��������Ҫͨ��QObject::sender()�����ʽ�����
	connect(checkbox, &QCheckBox::stateChanged, this, [=]() {
		qDebug() << "state changed";
		if (checkbox->isChecked()) {
			qDebug() << "is checked";
		}
		else {
			qDebug() << "no checked";
		}
	});

	// TODO QCheckBox�ź�stateChanged�޷�������
	//connect(checkbox, SIGNAL(stateChanged(int)), SLOT(checkState2()));
}


void CheckBox::checkState2()
{
	// QCheckBox* check = (QCheckBox*)sender();
	qDebug() << "state changed";
}