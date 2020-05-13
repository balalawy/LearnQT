#pragma once
#include <qwidget.h>
#include <qlineedit.h>
#include <qdebug.h>

class LineEdit :
	public QWidget
{
	Q_OBJECT
public:
	LineEdit(QWidget* parent = Q_NULLPTR);
};

