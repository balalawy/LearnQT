#pragma once

#include <QtWidgets/QWidget>
#include "ui_ModelViewLearn.h"

class ModelViewLearn : public QWidget
{
	Q_OBJECT

public:
	ModelViewLearn(QWidget *parent = Q_NULLPTR);

private:
	Ui::ModelViewLearnClass ui;
};
