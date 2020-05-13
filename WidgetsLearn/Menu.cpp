#include "Menu.h"


Menu::Menu(QWidget* parent)
	:QWidget(parent)
{
	QMenu* menu = new QMenu(this);

	QAction* a = new QAction("action1");
	connect(a, &QAction::triggered, this, [=]() {
		qDebug() << "action1";
	});
	QAction* b = new QAction("action2");
	QAction* c = new QAction("action3");
	QAction* d = new QAction("action4");
	QAction* e = new QAction("action5");

	menu->addAction(a);
	//menu->addSeparator();
	menu->addAction(b);
	//menu->addSeparator();
	menu->addAction(c);
	//menu->addSeparator();
	menu->addAction(d);
	//menu->addSeparator();
	menu->addAction(e);
	//menu->addSeparator();
	menu->exec(cursor().pos());
}