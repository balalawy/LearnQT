#include "Calculator.h"

Calculator::Calculator(QWidget* parent)
	:QWidget(parent)
{
	display = new QLineEdit;
	display->setReadOnly(true);
	display->setAlignment(Qt::AlignRight);
	display->setMaxLength(15);
	display->setFixedSize(340, 40);

	for (int i = 0; i < NumDigitButtons; ++i)
	{
		digitButtons[i] = new QPushButton(QString::number(i));
		digitButtons[i]->setFixedSize(50, 50);
	}

	backSpaceBtn = new QPushButton("BackSpace");
	backSpaceBtn->setFixedSize(110, 50);

	clearBtn = new QPushButton("Clear");
	clearBtn->setFixedSize(110, 50);

	clearAllBtn = new QPushButton("Clear All");
	clearAllBtn->setFixedSize(110, 50);

	mcBtn = new QPushButton("MC");
	mcBtn->setFixedSize(50, 50);
	mrBtn = new QPushButton("MR");
	mrBtn->setFixedSize(50, 50);
	msBtn = new QPushButton("MS");
	msBtn->setFixedSize(50, 50);
	mpBtn = new QPushButton("MP");
	mpBtn->setFixedSize(50, 50);
	divBtn = new QPushButton(QStringLiteral("¡Â"));
	divBtn->setFixedSize(50, 50);
	multiBtn = new QPushButton(QStringLiteral("¡Á"));
	multiBtn->setFixedSize(50, 50);
	minusBtn = new QPushButton(QStringLiteral("-"));
	minusBtn->setFixedSize(50, 50);
	plusBtn = new QPushButton(QStringLiteral("+"));
	plusBtn->setFixedSize(50, 50);
	sqrtBtn = new QPushButton("sqrt");
	sqrtBtn->setFixedSize(50, 50);
	powBtn = new QPushButton(QStringLiteral("^2"));
	powBtn->setFixedSize(50, 50);
	revBtn = new QPushButton(QStringLiteral("1/x"));
	revBtn->setFixedSize(50, 50);
	pointBtn = new QPushButton(QStringLiteral("."));
	pointBtn->setFixedSize(50, 50);
	pmBtn = new QPushButton(QStringLiteral("¡À"));
	pmBtn->setFixedSize(50, 50);
	equalBtn = new QPushButton(QStringLiteral("="));
	equalBtn->setFixedSize(50, 50);

	layout = new QGridLayout(this);
	layout->addWidget(display, 0, 0, 1, 6);

	layout->addWidget(backSpaceBtn, 1, 0, 1, 2);
	layout->addWidget(clearBtn, 1, 2, 1, 2);
	layout->addWidget(clearAllBtn, 1, 4, 1, 2);

	layout->addWidget(mcBtn, 2, 0, 1, 1);
	layout->addWidget(digitButtons[7], 2, 1, 1, 1);
	layout->addWidget(digitButtons[8], 2, 2, 1, 1);
	layout->addWidget(digitButtons[9], 2, 3, 1, 1);
	layout->addWidget(divBtn, 2, 4, 1, 1);
	layout->addWidget(sqrtBtn, 2, 5, 1, 1);

	layout->addWidget(mrBtn, 3, 0, 1, 1);
	layout->addWidget(digitButtons[4], 3, 1, 1, 1);
	layout->addWidget(digitButtons[5], 3, 2, 1, 1);
	layout->addWidget(digitButtons[6], 3, 3, 1, 1);
	layout->addWidget(multiBtn, 3, 4, 1, 1);
	layout->addWidget(powBtn, 3, 5, 1, 1);

	layout->addWidget(msBtn, 4, 0, 1, 1);
	layout->addWidget(digitButtons[1], 4, 1, 1, 1);
	layout->addWidget(digitButtons[2], 4, 2, 1, 1);
	layout->addWidget(digitButtons[3], 4, 3, 1, 1);
	layout->addWidget(minusBtn, 4, 4, 1, 1);
	layout->addWidget(revBtn, 4, 5, 1, 1);

	layout->addWidget(mpBtn, 5, 0, 1, 1);
	layout->addWidget(digitButtons[0], 5, 1, 1, 1);
	layout->addWidget(pointBtn, 5, 2, 1, 1);
	layout->addWidget(pmBtn, 5, 3, 1, 1);
	layout->addWidget(plusBtn, 5, 4, 1, 1);
	layout->addWidget(equalBtn, 5, 5, 1, 1);

	this->setFixedSize(365, 375);
}
