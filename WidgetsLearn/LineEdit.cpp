#include "LineEdit.h"

LineEdit::LineEdit(QWidget* parent)
	:QWidget(parent)
{
	QLineEdit* line = new QLineEdit(this);
	
	connect(line, &QLineEdit::returnPressed, this, [=]() {
		qDebug() << "finished edit";
		qDebug() << line->text();
	});
}
