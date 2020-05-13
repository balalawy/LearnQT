#pragma once
#include <qwidget.h>
#include <qpushbutton.h>
#include <qdebug.h>
#include <qmenu.h>

class PushButton :
	public QWidget
{
	Q_OBJECT
public:
	PushButton(QWidget* parent = Q_NULLPTR);
};

