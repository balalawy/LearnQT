#include "FileSystem.h"

FileSystem::FileSystem(QWidget* parent)
	:QWidget(parent)
{
	model = new QFileSystemModel;
	model->setRootPath(QDir::currentPath());

	QTreeView* treeView = new QTreeView(this);
	treeView->setModel(model);
	treeView->setMinimumWidth(550);

	QListView* listView = new QListView(this);
	listView->setModel(model);

	QTableView* tableView = new QTableView(this);
	tableView->setModel(model);

	QGroupBox* treeViewGroupBox = new QGroupBox("treeView");
	QHBoxLayout* hBoxLayout = new QHBoxLayout;
	hBoxLayout->addWidget(treeView);
	treeViewGroupBox->setLayout(hBoxLayout);

	QGroupBox* listViewGroupBox = new QGroupBox("listView");
	QVBoxLayout* vBoxLayout = new QVBoxLayout;
	vBoxLayout->addWidget(listView);
	listViewGroupBox->setLayout(vBoxLayout);

	QGroupBox* tableViewGroupBox = new QGroupBox("tableView");
	QGridLayout* gridLayout = new QGridLayout;
	gridLayout->addWidget(tableView, 0, 0);
	tableViewGroupBox->setLayout(gridLayout);

	//�ź���۹�����treeView����ʱ����Ŀ¼����ΪlistView��tableView�ĸ��ڵ�
	connect(treeView, SIGNAL(clicked(QModelIndex)),
		listView, SLOT(setRootIndex(QModelIndex)));
	connect(treeView, SIGNAL(clicked(QModelIndex)),
		tableView, SLOT(setRootIndex(QModelIndex)));

	QSplitter* rightSplitter = new QSplitter(Qt::Vertical, this);
	rightSplitter->addWidget(listViewGroupBox);
	rightSplitter->addWidget(tableViewGroupBox);

	QSplitter* centerSplitter = new QSplitter(Qt::Horizontal, this);
	centerSplitter->addWidget(treeViewGroupBox);
	centerSplitter->addWidget(rightSplitter);

	QGridLayout* bottomLayout = new QGridLayout;
	QLabel* fileNameLabel = new QLabel(QStringLiteral("�ļ���:"));
	bottomLayout->addWidget(fileNameLabel, 0, 0);
	fileNameDisplay = new QLabel(QStringLiteral(""));
	bottomLayout->addWidget(fileNameDisplay, 0, 1);
	QLabel* fileSizeLabel = new QLabel(QStringLiteral("�ļ���С:"));
	bottomLayout->addWidget(fileSizeLabel, 0, 2);
	fileSizeDisplay = new QLabel(QStringLiteral(""));
	bottomLayout->addWidget(fileSizeDisplay, 0, 3);
	QLabel* nodeTypeLabel = new QLabel(QStringLiteral("�ڵ�����:"));
	bottomLayout->addWidget(nodeTypeLabel, 0, 4);
	nodeTypeDisplay = new QLabel(QStringLiteral(""));
	bottomLayout->addWidget(nodeTypeDisplay, 0, 5);
	checkBox = new QCheckBox(QStringLiteral("�ڵ���Ŀ¼"));
	bottomLayout->addWidget(checkBox, 0, 6);
	pathLabel = new QLabel(QStringLiteral("·����:"));
	bottomLayout->addWidget(pathLabel, 1, 0);
	pathDisplay = new QLabel(QStringLiteral(""));
	bottomLayout->addWidget(pathDisplay, 1, 1);

	QSplitter* mainSplitter = new QSplitter(Qt::Vertical, this);
	mainSplitter->addWidget(centerSplitter);
	QWidget* bottomWidget = new QWidget;
	bottomWidget->setLayout(bottomLayout);
	mainSplitter->addWidget(bottomWidget);

	connect(treeView, &QTreeView::doubleClicked, [=](const QModelIndex& index) {
		checkBox->setChecked(model->isDir(index));
		qDebug() << model->filePath(index);
		model->setRootPath(model->filePath(index));
		treeView->setRootIndex(model->index(model->filePath(index)));
	});

	connect(treeView, &QTreeView::clicked, [=](const QModelIndex& index) {
		checkBox->setChecked(model->isDir(index));
		fileNameDisplay->setText(model->fileName(index));
		nodeTypeDisplay->setText(model->type(index));
		int sz = model->size(index) / 1024;
		if (sz < 1024) {
			fileSizeDisplay->setText(QString("%1 KB").arg(sz));
		}
		else {
			fileSizeDisplay->setText(QString("%1.f MB").arg(sz));
		}
		pathDisplay->setText(model->filePath(index));
		
	});

	mainSplitter->show();
}
