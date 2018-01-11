#include "CalcYL.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CalcYL w;
	w.show();
	return a.exec();
}
