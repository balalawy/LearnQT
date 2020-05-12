#pragma once


#include <QtWidgets>
#include <QList>
#include <qlayout.h>

class CardLayout :
	public QLayout
{
public:
	CardLayout(QWidget* parent = 0);
	~CardLayout();

	void addItem(QLayoutItem* item) override;
	QSize sizeHint() const override;
	QSize minimumSize() const override;
	int count() const override;
	QLayoutItem* itemAt(int) const override;
	QLayoutItem* takeAt(int) override;
	void setGeometry(const QRect& rect) override;

private:
	QList<QLayoutItem*> list;
};

