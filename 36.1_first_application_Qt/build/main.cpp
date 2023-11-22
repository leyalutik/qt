#include <QApplication>
#include <iostream>
#include <QTimer>


//slot
class Printer:public QObject
{
  Q_OBJECT
public slots:
	void print_finished()
	{
		std::cout<<"Finished!";
	}

};


int main(int argc, char **argv)
{
    QApplication app(argc,argv);

	QTimer my_timer;

	Printer my_printer;

	QObject::connect(&my_timer,&QTimer::timeout,&my_printer, &Printer::print_finished);
	my_timer.start(2); //ms
	app.exec();

	return 0;
}
#include "main.moc"

