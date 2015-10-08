#include "stdafx.h"
#include "planchet.h"
#include <iostream>

using namespace  std;
//используем список инициализации
Planchet::Planchet (char*brend_,unsigned int stoimost_ ,bool skidka_,unsigned int year_manuf_,
					unsigned int front_camera_,unsigned int rear_camera_,char*pereferiy_,float weight_)
	:Tovar(brend_,stoimost_,skidka_,year_manuf_), Texnika(pereferiy_,weight_),
	 front_camera_(front_camera_),rear_camera_(rear_camera_)
{
}

void Planchet::setFront_camera (unsigned int front_camera_)
{
	this->front_camera_=front_camera_;
}

unsigned int Planchet::getFront_camera () const
{
	return this->front_camera_;
}
void Planchet::setRear_camera (unsigned int rear_camera_)
{
	this->rear_camera_=rear_camera_;
}

unsigned int Planchet::getRear_camera () const
{
	return this->rear_camera_;
}

char* Planchet::type_tech() const
{
	return "планшета";
}

void Planchet::Show_fields_elem() const
{
	cout<<"Фронтальная камера "<<type_tech()<<"(Мп):";
	cout<<this->getFront_camera();
	cout<<endl;
	cout<<"Тыловая камера "<<type_tech()<<"(Мп):";
	cout<<this->getRear_camera();
	cout<<endl;
}

Planchet::~Planchet ()
{
	cout<<"Вызван деконструктор планшета"<<endl;
}

