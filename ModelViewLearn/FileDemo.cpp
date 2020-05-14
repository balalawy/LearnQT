#include "FileDemo.h"

FileDemo::FileDemo(QWidget* parent)
	:QWidget(parent)
{
	QSplitter* splitter = new QSplitter(this);
	
	QFileSystemModel* model = new QFileSystemModel;
	model->setRootPath(QDir::currentPath());

	QTreeView* treeView = new QTreeView(splitter);
	treeView->setModel(model);
	treeView->setRootIndex(model->index(QDir::currentPath()));

	QListView* listView = new QListView(splitter);
	listView->setModel(model);
	listView->setRootIndex(model->index(QDir::currentPath()));

	splitter->setFixedSize(750, 500);
}
