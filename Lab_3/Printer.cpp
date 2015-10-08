#include "stdafx.h"
#include "printer.h"
#include <iostream>

using namespace  std;

Printer::Printer (char* brend_, float stoimost_, bool skidka_, unsigned int year_manuf_, unsigned int emkost_ustr_podachi_)
	:Tovar(brend_,stoimost_,skidka_,year_manuf_), Texnika(),emkost_ustr_podachi_(emkost_ustr_podachi_) {};

char *Printer::type_tech()
{
	return "принтера";
}




void Printer::setEmkost_ustr_podachi ()
{
	cout<<"Введите емкость устройства подачи принтера:\n";
	cin>>this->emkost_ustr_podachi_;
}

void Printer::getEmkost_ustr_podachi () const
{
	cout<<"Емкость устройств подачи (стр.): "<<this->emkost_ustr_podachi_<<endl;
}


void Printer::Show()const
{
	cout<<"Информация о принтере:\n";
    this->getBrend();
	this->getStoimost();
	this->getSkidka();
	
	this->getYearManuf();
	this->getWeight();
	this->getPereferiy();
	this->getEmkost_ustr_podachi();
	}


Printer::~Printer ()
{
	cout<<"Вызван деконструктор принтера"<<endl;
	if(brend_)
	{
	 delete [] this->brend_;
	}
}



