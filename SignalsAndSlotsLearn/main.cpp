#include "SignalsAndSlotsLearn.h"
#include <QtWidgets/QApplication>

#include "Counter.h"
#include <qwidget.h>
#include <qobject.h>
#include <qdebug.h>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	Counter b, c;
	// ��һ�㣺���ź���ۺ����Ĳ���������ͬʱ�����ǲ�������Ҫ��ȫһ�¡�
	// �ڶ��㣺���źŵĲ�����ۺ����Ĳ���������ͬʱ��ֻ�����źŵĲ����������ڲۺ����Ĳ���������
	//		 ��ǰ����ͬ�����Ĳ�������Ӧһ�£��ź��ж���Ĳ����ᱻ���ԡ�
	QObject::connect(&b, &Counter::valueChanged, &c, &Counter::setValue);

	b.setValue2(12);     // b.value() == 12, c.value() == 12
	qDebug() << c.value();
	c.setValue2(48);     // b.value() == 12, c.value() == 48

	return a.exec();
}
