#include "TabWidget.h"

TabWidget::TabWidget(QWidget* parent)
	:QWidget(parent)
{
	QTabWidget* tabWidget = new QTabWidget(this);

	QFormLayout* formLayout = new QFormLayout;
	formLayout->addRow(QStringLiteral("姓名："), new QLineEdit);
	formLayout->addRow(QStringLiteral("年龄："), new QLineEdit);
	formLayout->addRow(QStringLiteral("年级："), new QLineEdit);
	formLayout->addRow(QStringLiteral("住址："), new QLineEdit);
	QWidget* page1 = new QWidget;
	page1->setLayout(formLayout);

	QFormLayout* formLayout2 = new QFormLayout;
	formLayout2->addRow(QStringLiteral("姓名："), new QPushButton);
	formLayout2->addRow(QStringLiteral("年龄："), new QPushButton);
	formLayout2->addRow(QStringLiteral("年级："), new QPushButton);
	formLayout2->addRow(QStringLiteral("住址："), new QPushButton);
	QWidget* page2 = new QWidget;
	page2->setLayout(formLayout2);

	tabWidget->addTab(page1, QStringLiteral("学生信息"));
	tabWidget->addTab(page2, QStringLiteral("老师信息"));
}
