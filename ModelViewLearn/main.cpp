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
#include <qstandarditemmodel.h>


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


void custom_treeModel_Demo()
{

	QStandardItemModel* model = new QStandardItemModel;//创建模型
	model->setHorizontalHeaderLabels(QStringList()
		<< QStringLiteral("项目名") << QStringLiteral("相关信息1")
		<< QStringLiteral("相关信息2"));

	QStandardItem* item = new QStandardItem("item one");//创建一个条目对象
	// 第0行 -----> 0 row
	model->appendRow(item);//通过模型对象添加这个条目
	model->item(0)->appendRow(new QStandardItem("msg one"));
	model->item(0)->appendRow(new QStandardItem("msg two"));
	model->item(0)->appendRow(new QStandardItem("msg three"));

	// 第1行 -----> 1 row
	model->appendRow(new QStandardItem("item two"));
	model->setItem(1, 1, new QStandardItem("ex msg 1"));

	// 第2行 -----> 2 row
	model->setItem(2, 0, new QStandardItem("item three"));
	model->item(2)->appendRow(new QStandardItem("msg one"));
	model->item(2)->appendRow(new QStandardItem("msg two"));
	model->item(2)->appendRow(new QStandardItem("msg three"));
	model->item(2)->appendRow(new QStandardItem("msg four"));


	QTreeView* treeView = new QTreeView;
	treeView->setModel(model);
	treeView->show();
}


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	// fileDemo();
	// usingModel_Demo();
	// usingView_Demo();
	// fileSystem_Demo();
	custom_treeModel_Demo();

	return a.exec();
}
