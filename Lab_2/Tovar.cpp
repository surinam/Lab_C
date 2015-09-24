#include "stdafx.h"
#include "tovar.h"
#include <cstring>
#include <iostream>


using namespace  std;

Tovar::Tovar ()
{
	cout<<"������ ����������� ������"<<endl;
}

Tovar::Tovar (char* _brend,char* _tip_tovara,float _stoimost, bool _skidka)
{
	int length=strlen(_brend)+1;
	brend=new char[length];
	strcpy_s(brend,length,_brend);
	length=strlen(_tip_tovara)+1;
	tip_tovara=new char[length];
	strcpy_s(tip_tovara,length,_tip_tovara);
	stoimost =_stoimost;
	skidka=_skidka;
};

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

void Tovar::setStoimost (float stoimost)
{
	this->stoimost=stoimost;
}

void Tovar::getStoimost ()
{
	cout<<"��������� ������ (���.���.): "<<(float)stoimost<<endl;
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

Tovar::~Tovar ()
{
	cout<<"������ ������������� �����"<<endl;
	if (brend && tip_tovara )
	{
	delete [] brend;
		delete [] tip_tovara;
	}
}

