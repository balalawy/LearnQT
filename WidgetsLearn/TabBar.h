#pragma once
#include <qwidget.h>
#include <qtabbar.h>
#include <qdebug.h>
#include <qlayout.h>

class TabBar :
	public QWidget
{
	Q_OBJECT
public:
	TabBar(QWidget* parent = Q_NULLPTR);
};

