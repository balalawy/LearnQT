#pragma once
#include <qwidget.h>
#include <qpushbutton.h>
#include <qlineedit.h>
#include <qlayout.h>

class Calculator :
	public QWidget
{
public:
	Calculator(QWidget* parent = Q_NULLPTR);

private:
	QLineEdit* display;

	enum{NumDigitButtons = 10};
	QPushButton* digitButtons[NumDigitButtons];

	QPushButton* backSpaceBtn;
	QPushButton* clearBtn;
	QPushButton* clearAllBtn;
	QPushButton* mcBtn;
	QPushButton* mrBtn;
	QPushButton* msBtn;
	QPushButton* mpBtn;
	QPushButton* divBtn;
	QPushButton* multiBtn;
	QPushButton* minusBtn;
	QPushButton* plusBtn;
	QPushButton* sqrtBtn;
	QPushButton* powBtn;
	QPushButton* revBtn;
	QPushButton* pointBtn;
	QPushButton* pmBtn;
	QPushButton* equalBtn;

	QGridLayout* layout;
};

