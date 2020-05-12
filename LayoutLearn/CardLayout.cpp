#include "CardLayout.h"


CardLayout::CardLayout(QWidget* parent)
	:QLayout(parent)
{

}


// Since QLayoutItem does not inherit QObject, we must delete the items manually. 
CardLayout::~CardLayout()
{
	QLayoutItem* item;
	while ((item = takeAt(0)))
		delete item;
}


// First we define count() to fetch the number of items in the list
int CardLayout::count() const
{
	return list.size();
}


/**
*	Then we define two functions that iterate over the layout: itemAt() and takeAt(). 
*	These functions are used internally by the layout system to handle deletion of widgets. 
*	They are also available for application programmers.
*/

// itemAt() returns the item at the given index.
QLayoutItem* CardLayout::itemAt(int idx) const
{
	// QList::value() performs index checking, and returns 0 if we are
	// outside the valid range
	return list.value(idx);
}


// takeAt() removes the item at the given index, and returns it.
QLayoutItem* CardLayout::takeAt(int idx)
{
	// QList::take does not do index checking
	return idx >= 0 && idx < list.size() ? list.takeAt(idx) : 0;
}


// addItem() implements the default placement strategy for layout items.
// This function must be implemented.
void CardLayout::addItem(QLayoutItem* item)
{
	list.append(item);
}


/**
*	The setGeometry() function actually performs the layout. 
*	The rectangle supplied as an argument does not include margin(). 
*	If relevant, use spacing() as the distance between items.
*/

// The setGeometry() function actually performs the layout. 
void CardLayout::setGeometry(const QRect& r)
{
    QLayout::setGeometry(r);

    if (list.size() == 0)
        return;

    int w = r.width() - (list.count() - 1) * spacing();
    int h = r.height() - (list.count() - 1) * spacing();
    int i = 0;
    while (i < list.size()) {
        QLayoutItem* o = list.at(i);
        QRect geom(r.x() + i * spacing(), r.y() + i * spacing(), w, h);
        o->setGeometry(geom);
        ++i;
    }
}


/**
*   sizeHint() and minimumSize() are normally very similar in implementation. 
*   The sizes returned by both functions should include spacing(), but not margin().
*/

// the preferred size of the layout.
QSize CardLayout::sizeHint() const
{
    QSize s(0, 0);
    int n = list.count();
    if (n > 0)
        s = QSize(100, 70); //start with a nice default size
    int i = 0;
    while (i < n) {
        QLayoutItem* o = list.at(i);
        s = s.expandedTo(o->sizeHint());
        ++i;
    }
    return s + n * QSize(spacing(), spacing());
}


// the minimum size of the layout.
QSize CardLayout::minimumSize() const
{
    QSize s(0, 0);
    int n = list.count();
    int i = 0;
    while (i < n) {
        QLayoutItem* o = list.at(i);
        s = s.expandedTo(o->minimumSize());
        ++i;
    }
    return s + n * QSize(spacing(), spacing());
}