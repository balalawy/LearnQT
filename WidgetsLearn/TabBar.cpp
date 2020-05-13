#include "TabBar.h"

TabBar::TabBar(QWidget* parent)
	:QWidget(parent)
{
	QTabBar* tabBar = new QTabBar(this);
	tabBar->addTab("tab1");
	tabBar->addTab("tab2");
	tabBar->addTab("tab3");

	QHBoxLayout* hBoxLayout = new QHBoxLayout(this);
	hBoxLayout->addWidget(tabBar);

	connect(tabBar, &QTabBar::currentChanged, this, [=]() {
		qDebug() << tabBar->currentIndex();
	});
}
