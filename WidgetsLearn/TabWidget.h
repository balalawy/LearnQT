#pragma once
#include <qwidget.h>
#include <qtabwidget.h>
#include <qdebug.h>
#include <qgridlayout.h>
#include <qlayout.h>
#include <qlabel.h>
#include <qpushbutton.h>
#include <qformlayout.h>
#include <qlineedit.h>

class TabWidget :
	public QWidget
{
	Q_OBJECT
public:
	TabWidget(QWidget* parent = Q_NULLPTR);
};

