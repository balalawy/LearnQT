#include "Label.h"

Label::Label(QWidget* parent)
	:QWidget(parent)
{
	/**
	*	Content					Setting
	*	Plain text		|		Pass a QString to setText().
	*	Rich text		|		Pass a QString that contains rich text to setText().
	*	A pixmap		|		Pass a QPixmap to setPixmap().
	*	A movie			|		Pass a QMovie to setMovie().
	*	A number		|		Pass an int or a double to setNum(), which converts the number to plain text.
	*	Nothing			|		The same as an empty plain text. This is the default. Set by clear().
	*/

	// The positioning of the content within the QLabel widget area can be tuned with setAlignment() and setIndent(). 
	// Text content can also wrap lines along word boundaries with setWordWrap().
	QLabel* label = new QLabel(this);
	label->setFrameStyle(QFrame::Panel | QFrame::Sunken);
	label->setText("first line\nsecond line");
	label->setAlignment(Qt::AlignBottom | Qt::AlignRight);

	QLineEdit* phoneEdit = new QLineEdit;
	QLabel* phoneLabel = new QLabel("&Phone:");
	phoneLabel->setBuddy(phoneEdit);

	QPixmap* pixmap = new QPixmap;
	pixmap->load("./img/cat.png");
	QLabel* pixLabel = new QLabel;
	pixLabel->setPixmap(*pixmap);

	QVBoxLayout* layout = new QVBoxLayout(this);
	layout->addWidget(label);

	QHBoxLayout* hBoxLayout = new QHBoxLayout;
	hBoxLayout->addWidget(phoneLabel);
	hBoxLayout->addWidget(phoneEdit);
	layout->addLayout(hBoxLayout);

	layout->addWidget(pixLabel);


}