#pragma once
#include <qwidget.h>
#include <qsplitter.h>
#include <qfilesystemmodel.h>
#include <qtreeview.h>
#include <qlistview.h>
#include <qdir.h>

class FileDemo :
	public QWidget
{
	Q_OBJECT
public:
	FileDemo(QWidget* parent = Q_NULLPTR);
};

