#include "LayoutLearn.h"
#include "HBoxLayout.h"

#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	// ˮƽ����
	HBoxLayout* hBoxLayoutDemo = new HBoxLayout;
	hBoxLayoutDemo->show();



	return a.exec();
}
