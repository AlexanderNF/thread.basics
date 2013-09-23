#ifndef THREADBASICS_HELLOTHREAD_H
#define THREADBASICS_HELLOTHREAD_H

#include <QtCore/QThread>

class HelloThread : public QThread
{
	Q_OBJECT

public:
	HelloThread(QObject *parent = 0);

signals:
	void testSignal();

private slots:
	void testSlot();

private:
	void connect();
	void run();
};

#endif // THREADBASICS_HELLOTHREAD_H
