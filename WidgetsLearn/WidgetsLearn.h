#pragma once

#include <QtWidgets/QWidget>
#include "ui_WidgetsLearn.h"

class WidgetsLearn : public QWidget
{
	Q_OBJECT

public:
	WidgetsLearn(QWidget *parent = Q_NULLPTR);

private:
	Ui::WidgetsLearnClass ui;
};
