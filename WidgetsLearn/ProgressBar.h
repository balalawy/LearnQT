#pragma once
#include <qwidget.h>
#include <qprogressbar.h>
#include <qdebug.h>

class ProgressBar :
	public QWidget
{
	Q_OBJECT
public:
	ProgressBar(QWidget* parent = Q_NULLPTR);
};

