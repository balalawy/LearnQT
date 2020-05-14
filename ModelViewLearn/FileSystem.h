#pragma once
#include <qwidget.h>
#include <qfilesystemmodel.h>
#include <qtreeview.h>
#include <qlistview.h>
#include <qtableview.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qgridlayout.h>
#include <qdir.h>
#include <qgroupbox.h>
#include <qsplitter.h>
#include <qgroupbox.h>
#include <qlabel.h>
#include <qcheckbox.h>
#include <qdebug.h>

class FileSystem :
	public QWidget
{
	Q_OBJECT
public:
	FileSystem(QWidget* parent = Q_NULLPTR);

public slots:


private:
	QLabel* fileNameDisplay;
	QLabel* fileSizeDisplay;
	QLabel* nodeTypeDisplay;
	QCheckBox* checkBox;
	QLabel* pathLabel;
	QLabel* pathDisplay;

	QFileSystemModel* model;
};

