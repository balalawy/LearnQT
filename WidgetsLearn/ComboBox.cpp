#include "ComboBox.h"

ComboBox::ComboBox(QWidget* parent)
	:QWidget(parent)
{
	QComboBox* comboBox = new QComboBox(this);
	comboBox->addItem("vaneyu");
	comboBox->addItem("liuchun");
	comboBox->addItem("zhangsan");

	comboBox->setEditable(true);

	// �������Ա����ָ�룬�������ź�����
	void (QComboBox:: * ciC)(int) = &QComboBox::currentIndexChanged;
	connect(comboBox, ciC, this, [=]() {
		qDebug() << "change";
		qDebug() << "current text:" << comboBox->currentText();
	});
}