#include "hellothread.h"

#include <QtCore/QDebug>

/*------- HelloThread class -------------------------------------------------*/
HelloThread::HelloThread(QObject *parent)
	: QThread(parent)
{
	connect();
}

void HelloThread::testSlot()
{
	qDebug() << "Testin slot" << endl;
}

void HelloThread::connect()
{
	QObject::connect(this, SIGNAL(testSignal()),
					 SLOT(testSlot()));
}

void HelloThread::run()
{
	// exec();

	sleep(1);
	qDebug() << "Hello from worker thread ! Thread ID is: " << (int)currentThreadId() << endl;

	emit testSignal();
}
