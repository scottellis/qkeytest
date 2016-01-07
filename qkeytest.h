#ifndef QKEYTEST_H
#define QKEYTEST_H

#include <QtWidgets/QMainWindow>

class QKeyTest : public QMainWindow
{
	Q_OBJECT

public:
	QKeyTest(QWidget *parent = 0);

private:
	void layoutWindow();
};

#endif // QKEYTEST_H
