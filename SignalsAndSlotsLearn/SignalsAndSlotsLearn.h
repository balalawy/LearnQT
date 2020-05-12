#pragma once

#include <QtWidgets/QWidget>
#include "ui_SignalsAndSlotsLearn.h"

class SignalsAndSlotsLearn : public QWidget
{
	Q_OBJECT

public:
	SignalsAndSlotsLearn(QWidget *parent = Q_NULLPTR);

private:
	Ui::SignalsAndSlotsLearnClass ui;
};
