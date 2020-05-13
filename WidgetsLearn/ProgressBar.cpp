#include "ProgressBar.h"

ProgressBar::ProgressBar(QWidget* parent)
	:QWidget(parent)
{
	QProgressBar* progressBar = new QProgressBar(this);
	progressBar->setMinimum(0);
	progressBar->setMaximum(100);
	progressBar->setValue(50);

	progressBar->setFixedWidth(500);
}