#pragma once

#include <QtWidgets/QWidget>
#include "ui_LayoutLearn.h"

class LayoutLearn : public QWidget
{
	Q_OBJECT

public:
	LayoutLearn(QWidget *parent = Q_NULLPTR);

private:
	Ui::LayoutLearnClass ui;
};
