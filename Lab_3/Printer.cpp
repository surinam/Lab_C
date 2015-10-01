#include "stdafx.h"
#include "printer.h"
#include <iostream>

using namespace  std;

Printer::Printer (char* brend_, float stoimost_, bool skidka_, unsigned int year_manuf_, unsigned int emkost_ustr_podachi_)
	:Tovar(brend_,stoimost_,skidka_,year_manuf_), Texnika(),emkost_ustr_podachi_(emkost_ustr_podachi_) {};

void Printer::setBrend()
{
	cout<<"������� ����� ��������:\n";
	char*p=this->brend_;
	delete [] p;
	char brend_[10];
	cin>>brend_;
	length=strlen(brend_)+1;
	this->brend_=new char[length];
	if(this->brend_)
	{
		strcpy_s(this->brend_,length,brend_);
	}

}

void Printer::getBrend () const
{
	cout<<"����� ��������:\n";
	cout<<this->brend_<<endl;
}

void Printer::setStoimost ()
{
	cout<<"������� ��������� ��������:\n";
	cin>>this->stoimost_;
}

void Printer::getStoimost () const
{
	cout<<"C�������� ��������:\n";
	cout<<(int)this->stoimost_<<endl;
}
void Printer::setSkidka ()
{
	cout<<"������� �� ������ �� �������� (1-��, 0-���):\n";
	cin>>this->skidka_;
}

void Printer::getSkidka () const
{
	if(this->skidka_) cout<<"������ �� ������� ����\n";
}

void Printer::setYearManuf()
{
	cout<<"������� ��� ������� ��������:\n";
	cin>>this->year_manuf_;

}

void Printer::getYearManuf() const
{
	cout<<"��� ������� ��������:\n";
	cout<<this->year_manuf_<<endl;
}

void Printer::setEmkost_ustr_podachi ()
{
	cout<<"������� ������� ���������� ������ ��������:\n";
	cin>>this->emkost_ustr_podachi_;
}

void Printer::getEmkost_ustr_podachi () const
{
	cout<<"������� ��������� ������ (���.): "<<this->emkost_ustr_podachi_<<endl;
}


void Printer::Show()const
{
	cout<<"���������� � ��������:\n";
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
	cout<<"������ ������������� ��������"<<endl;
	if(brend_)
	{
	 delete [] this->brend_;
	}
}



