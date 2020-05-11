#pragma once
#include <QtWidgets/QWidget>
#include <qpushbutton.h>
#include <qboxlayout.h>

class HBoxLayout :
	public QWidget
{
	Q_OBJECT

public:
	HBoxLayout(QWidget* parent = Q_NULLPTR);

private:
	QPushButton* button1;
	QPushButton* button2;
	QPushButton* button3;
	QPushButton* button4;
	QPushButton* button5;

	QHBoxLayout* layout;

private slots:

};

