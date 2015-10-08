#include "stdafx.h"
#include "tovar.h"
#include <iostream>
#include "laboratorie.h"
#include "komputer.h"
using namespace std;
typedef unsigned int u_int;

Tovar::Tovar (char* brend_,unsigned int stoimost_, bool skidka_, unsigned int year_manuf_)
	:Laboratorie(),stoimost_(stoimost_),skidka_(skidka_),year_manuf_(year_manuf_)
{
	 setBrend(brend_);
};
	

void Tovar::setBrend(char*brend_)
{
	if(this->brend_!=NULL) 
	{
		delete [] this->brend_;
	}
	length=strlen(brend_)+1;
	this->brend_=new char[length];//выделить пам. в куче
	if(this->brend_)
	{
		strcpy_s(this->brend_,length,brend_);
	}

}

char* Tovar::getBrend () const
{
	return this->brend_;
}

void Tovar::setStoimost (u_int stoimost_)
{
	this->stoimost_=stoimost_;
}

u_int Tovar::getStoimost () const
{
	return	this->stoimost_;
}

void Tovar::setSkidka (bool skidka_ )
{
	this->skidka_=skidka_;
}

bool Tovar::getSkidka () const
{
	return this->skidka_;
}

void Tovar::setYearManuf(u_int year_manuf_)
{
	
	this->year_manuf_=year_manuf_;
}

u_int Tovar::getYearManuf() const
{
	
	return this->year_manuf_;
}


//статическая функц.-член 
void Tovar::Show(Tovar*p)
{
	cout<<"Бренд "<<p->type_tech()<<":"<<p->getBrend()<<endl;
	p->Show_fields_elem();//вызвать функцию Show() сответ. фактическому значению указ.(объект. типа) p_buf, а не его типу
	/*this->getStoimost();
	this->getSkidka();
	this->getYearManuf();*/
};


Tovar::~Tovar ()
{
	if(brend_)
	{
		delete [] brend_;
	}
}