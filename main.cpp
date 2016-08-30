#include "qkeytest.h"
#include <QtWidgets/QApplication>

#define SHOW_FULLSCREEN

int main(int argc, char *argv[])
{
	QApplication *app = new QApplication(argc, argv);
	QKeyTest *w = new QKeyTest;

#ifdef SHOW_FULLSCREEN
	w->showFullScreen();
#else
	w->show();
#endif

	return app->exec();
}
