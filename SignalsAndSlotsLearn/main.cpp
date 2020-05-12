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
	// 第一点：当信号与槽函数的参数数量相同时，它们参数类型要完全一致。
	// 第二点：当信号的参数与槽函数的参数数量不同时，只能是信号的参数数量多于槽函数的参数数量，
	//		 且前面相同数量的参数类型应一致，信号中多余的参数会被忽略。
	QObject::connect(&b, &Counter::valueChanged, &c, &Counter::setValue);

	b.setValue2(12);     // b.value() == 12, c.value() == 12
	qDebug() << c.value();
	c.setValue2(48);     // b.value() == 12, c.value() == 48

	return a.exec();
}
