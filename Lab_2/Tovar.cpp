#include "stdafx.h"
#include "tovar.h"
#include <iostream>

using namespace  std;

Tovar::Tovar ()
{
	cout<<"������ ����������� ������"<<endl;
}

void Tovar::setBrend (char*brend)
{
	this->brend=brend;
}

void Tovar::getBrend ()
{
	cout<<"�����: "<<this->brend<<endl;
}

void Tovar::setTip_tovara (char*tip_tovara)
{
	this->tip_tovara=tip_tovara;
}

void Tovar::getTip_tovara ()
{
	cout<<"��� ������: "<<this->tip_tovara<<endl;
}

void Tovar::setStoimost (unsigned int stoimost)
{
	this->stoimost=stoimost;
}

void Tovar::getStoimost ()
{
	cout<<"��������� ������ (���.���.): "<<this->stoimost<<endl;
}

void Tovar::setSkidka (bool skidka)
{
	this->skidka=skidka;
}

void Tovar::getSkidka ()
{
	if (skidka) 
	{
		cout<<"������ ���������!"<<endl;
    }
	else 
	{
		cout<<"������ �����������!"<<endl;
	}
}

