#include "PushButton.h"

PushButton::PushButton(QWidget* parent)
	:QWidget(parent)
{
	QPushButton* button = new QPushButton(this);
	button->setText("button");

	QMenu* menu = new QMenu;
	QAction* action1 = new QAction("action1");
	QAction* action2 = new QAction("action2");
	QAction* action3 = new QAction("action3");
	QAction* action4 = new QAction("action4");
	menu->addAction(action1);
	menu->addAction(action2);
	menu->addAction(action3);
	menu->addAction(action4);

	button->setMenu(menu);

	connect(button, &QPushButton::clicked, this, [=]() {
		qDebug() << button->text();
	});

	connect(button, &QPushButton::clicked, button, &QPushButton::showMenu);
}
