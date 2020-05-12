#pragma once
#include <qwidget.h>
#include <qcheckbox.h>
#include <qdebug.h>

// The QCheckBox widget provides a checkbox with a text label. 
class CheckBox :
	public QWidget
{
	Q_OBJECT
public:
	CheckBox(QWidget* parent = Q_NULLPTR);

public slots:
	void checkState2();
};

