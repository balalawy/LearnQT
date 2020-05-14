#include "ModelViewLearn.h"
#include <QtWidgets/QApplication>

#include "FileDemo.h"
#include <qwidget.h>
#include <qobject.h>
#include <qdir.h>
#include <qdebug.h>



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


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	// fileDemo();
	usingModel_Demo();

	return a.exec();
}
