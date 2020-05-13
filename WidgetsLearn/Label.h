#pragma once
#include <qwidget.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qlayout.h>
#include <qpixmap.h>

class Label :
	public QWidget
{
	Q_OBJECT
public:
	Label(QWidget* parent = Q_NULLPTR);
};

