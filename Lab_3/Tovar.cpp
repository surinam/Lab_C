#include "stdafx.h"
#include "tovar.h"
#include <iostream>


Tovar::Tovar (char* brend_="no brend",float stoimost_= 0, bool skidka_= false, unsigned int year_manuf_= 0)
 {
	length=strlen(brend_)+1;
	this->brend_=new char[length]; //выделить пам. в куче
	if (this->brend_) {strcpy_s(this->brend_,length,brend_);}
	this->stoimost_ =stoimost_;
	this->skidka_=skidka_;
	this->year_manuf_=year_manuf_;
	};

Tovar* Tovar::pHead_=NULL;

//статическая функц.-член просмотра списка
void Tovar::show()
{

};

void Tovar::add_to_list(Tovar *p_add_obj)
{
}

Tovar::~Tovar ()
{
	
}