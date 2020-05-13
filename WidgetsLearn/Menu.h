#pragma once
#include <qwidget.h>
#include <qmenu.h>
#include <qdebug.h>

// The QMenu class provides a menu widget for use in menu bars, context menus, and other popup menus. 
class Menu :
	public QWidget
{
	Q_OBJECT
public:
	Menu(QWidget* parent = Q_NULLPTR);
};

