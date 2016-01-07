#include "qkeytest.h"
#include <QtWidgets/QApplication>

#define SHOW_FULLSCREEN

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QKeyTest w;

#ifdef SHOW_FULLSCREEN
	w.showFullScreen();
#else
	w.show();
#endif

	return a.exec();
}
