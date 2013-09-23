#include "hellothread.h"
#include <QtCore/QCoreApplication>
#include <QtCore/QDebug>

int main(int argc, char *argv[])
{
	QCoreApplication app(argc, argv);

	HelloThread helloThread;
	helloThread.start();
	qDebug() << "Main thread ID is: " << (int)QThread::currentThreadId();
	helloThread.wait();

	return 0;
}
