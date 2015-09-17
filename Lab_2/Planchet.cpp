#include "stdafx.h"
#include "planchet.h"
#include <iostream>

using namespace  std;

Planchet::Planchet ()
{
	cout<<"Вызван конструктор планшета"<<endl;
}

void Planchet::setFront_camera (float front_camera)
{
	this->front_camera=front_camera;
}

void Planchet::getFront_camera ()
{
	cout<<"Фронтальная камера (Мп): "<<this->front_camera<<endl;
}
void Planchet::setRear_camera (float rear_camera)
{
	this->rear_camera=rear_camera;
}

void Planchet::getRear_camera ()
{
	cout<<"Тыловая камера (Мп): "<<this->rear_camera<<endl;
}

Planchet::~Planchet ()
{
	cout<<"Вызван деконструктор планшета"<<endl;
}

