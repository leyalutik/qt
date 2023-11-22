#include <iostream>
#include <QApplication>
#include <QSlider>
#include <QSpinBox>


int main(int argc, char **argv)
{

	QApplication app(argc, argv);

	auto *spinbox = new QSpinBox();
	auto *slider = new QSlider(Qt::Horizontal);

	slider->setMinimum(0);
	slider->setMaximum(100);
	spinbox->setMinimum(0);
	spinbox->setMaximum(100);

	QObject::connect(slider,&QSlider::valueChanged,spinbox,&QSpinBox::setValue );

	QObject::connect(spinbox,QOverload<int>::of(&QSpinBox::valueChanged),slider,&QSlider::setValue );
	slider->resize(50,10);



	spinbox->show();
	slider->show();


	app.exec();


	return 0;


}
