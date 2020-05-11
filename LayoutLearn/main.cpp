#include "LayoutLearn.h"
#include "HBoxLayout.h"
#include "VBoxLayout.h"
#include "GridLayout.h"
#include "FormLayout.h"

#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	// ˮƽ����
	HBoxLayout* hBoxLayoutDemo = new HBoxLayout;
	hBoxLayoutDemo->show();

	// ��ֱ����
	VBoxLayout* vBoxLayoutDemo = new VBoxLayout;
	vBoxLayoutDemo->show();

	// ���񲼾�
	GridLayout* gridLayoutDemo = new GridLayout;
	gridLayoutDemo->show();

	// ��񲼾�
	FormLayout* formLayoutDemo = new FormLayout;
	formLayoutDemo->show();

	return a.exec();
}
