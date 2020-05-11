#include "LayoutLearn.h"
#include "HBoxLayout.h"
#include "VBoxLayout.h"
#include "GridLayout.h"

#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	// 水平布局
	HBoxLayout* hBoxLayoutDemo = new HBoxLayout;
	hBoxLayoutDemo->show();

	// 垂直布局
	VBoxLayout* vBoxLayoutDemo = new VBoxLayout;
	vBoxLayoutDemo->show();

	// 网格布局
	GridLayout* gridLayoutDemo = new GridLayout;
	gridLayoutDemo->show();

	return a.exec();
}
