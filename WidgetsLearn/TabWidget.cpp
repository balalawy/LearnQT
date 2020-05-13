#include "TabWidget.h"

TabWidget::TabWidget(QWidget* parent)
	:QWidget(parent)
{
	QTabWidget* tabWidget = new QTabWidget(this);

	QFormLayout* formLayout = new QFormLayout;
	formLayout->addRow(QStringLiteral("������"), new QLineEdit);
	formLayout->addRow(QStringLiteral("���䣺"), new QLineEdit);
	formLayout->addRow(QStringLiteral("�꼶��"), new QLineEdit);
	formLayout->addRow(QStringLiteral("סַ��"), new QLineEdit);
	QWidget* page1 = new QWidget;
	page1->setLayout(formLayout);

	QFormLayout* formLayout2 = new QFormLayout;
	formLayout2->addRow(QStringLiteral("������"), new QPushButton);
	formLayout2->addRow(QStringLiteral("���䣺"), new QPushButton);
	formLayout2->addRow(QStringLiteral("�꼶��"), new QPushButton);
	formLayout2->addRow(QStringLiteral("סַ��"), new QPushButton);
	QWidget* page2 = new QWidget;
	page2->setLayout(formLayout2);

	tabWidget->addTab(page1, QStringLiteral("ѧ����Ϣ"));
	tabWidget->addTab(page2, QStringLiteral("��ʦ��Ϣ"));
}
