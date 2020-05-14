#include "ModelViewLearn.h"
#include <QtWidgets/QApplication>

#include "FileDemo.h"
#include <qwidget.h>
#include <qobject.h>
#include <qdir.h>
#include <qdebug.h>
#include <qlistview.h>
#include <qstringlistmodel.h>
#include <qstringlist.h>
#include <qabstractitemmodel.h>
#include <qtableview.h>
#include "FileSystem.h"


void fileDemo()
{
	FileDemo* fileDemo = new FileDemo();
	fileDemo->show();
}


void usingModel_Demo()
{
	QFileSystemModel* model = new QFileSystemModel;

	QObject::connect(model, &QFileSystemModel::directoryLoaded, [model](const QString& directory) {
		QModelIndex parentIndex = model->index(directory);
		int numRows = model->rowCount(parentIndex);
		qDebug() << "********************************************";
		for (int row = 0; row < numRows; ++row) {
			QModelIndex index = model->index(row, 0, parentIndex);
			QString text = model->data(index, Qt::DisplayRole).toString();
			qDebug() << text;
		}
		
	});

	model->setRootPath(QDir::currentPath());
}


void usingView_Demo()
{
	QStringList numbers;
	numbers << "One" << "Two" << "Three" << "Four" << "Five";

	QAbstractItemModel* model = new QStringListModel(numbers);
	QListView* view = new QListView;
	view->setModel(model);
	view->show();

	QTableView* firstTableView = new QTableView;
	QTableView* secondTableView = new QTableView;

	firstTableView->setModel(model);
	secondTableView->setModel(model);

	firstTableView->show();
	secondTableView->show();

	secondTableView->setSelectionModel(firstTableView->selectionModel());
}


void fileSystem_Demo()
{
	FileSystem* fileSystem = new FileSystem;
	fileSystem->show();
}


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	// fileDemo();
	// usingModel_Demo();
	// usingView_Demo();
	fileSystem_Demo();

	return a.exec();
}
