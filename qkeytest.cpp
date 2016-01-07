#include <qformlayout.h>
#include <qboxlayout.h>
#include <qlineedit.h>
#include <qpushbutton.h>
#include "qkeytest.h"

QKeyTest::QKeyTest(QWidget *parent)
	: QMainWindow(parent)
{
	layoutWindow();
}

void QKeyTest::layoutWindow()
{
	QVBoxLayout *layout = new QVBoxLayout;

	QFormLayout *formLayout = new QFormLayout;
	formLayout->addRow("Input", new QLineEdit);

	layout->addLayout(formLayout);

	QPushButton *btn = new QPushButton("OK");
	btn->setMaximumWidth(60);
	connect(btn, SIGNAL(clicked()), SLOT(close()));

	QHBoxLayout *hLayout = new QHBoxLayout;
	hLayout->addStretch();
	hLayout->addWidget(btn);
	hLayout->addStretch();

	layout->addLayout(hLayout);

	QWidget *widget = new QWidget;
	widget->setLayout(layout);
	setCentralWidget(widget);			
}
