#pragma once
#include <qwidget.h>
#include <qcombobox.h>
#include <qdebug.h>

// The QComboBox widget is a combined button and popup list.
class ComboBox :
	public QWidget
{
	Q_OBJECT
public:
	ComboBox(QWidget* parent = Q_NULLPTR);
};

