#pragma once

#include <qobject.h>

class Counter :
	public QObject
{
	Q_OBJECT
public:
	Counter() { m_value = 0; }

	void setValue2(int value);

	int value() const { return m_value; }

public slots:
	void setValue(int value);

signals:
	void valueChanged(int newValue);

private:
	int m_value;
};

