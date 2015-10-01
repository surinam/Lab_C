#include "stdafx.h"
#include "tovar.h"
#include <iostream>


Tovar::Tovar (char* brend_,float stoimost_, bool skidka_, unsigned int year_manuf_)
 {
	length=strlen(brend_)+1;
	this->brend_=new char[length]; //выделить пам. в куче
	if (this->brend_) {strcpy_s(this->brend_,length,brend_);}
	this->stoimost_ =stoimost_;
	this->skidka_=skidka_;
	this->year_manuf_=year_manuf_;
	};

Tovar* Tovar::pHead_=NULL;

//добавление в односвяз. список
void Tovar::add_to_list(Tovar *p_add_obj) //можно передавать указатель на ПК
{
	if(!pHead_) //если список пуст
	{
		pHead_=p_add_obj; //инициализ. голову
		p_add_obj->next=NULL; //занулить указ. на следующ. структ. переменую

	}
	else
	{
		Tovar*p_buf=pHead_; //рабочий указатель
		while(p_buf->next!=NULL) //если далее имеется элемент (структ. переменная)
		{
			p_buf=p_buf->next;
		};
		p_buf->next=p_add_obj;
		p_add_obj->next=NULL; //у вновь добавл. обнул. на следующий
	}
}

//статическая функц.-член просмотра списка
void Tovar::Show_list()
{
	Tovar*p_buf=pHead_; //рабочий указатель
	while(p_buf) //пока не конец
	{
		p_buf->Show(); //вызвать функцию Show() сответ. фактическому значению указ.(объект. типа) p_buf, а не его типу
		p_buf=p_buf->next;
	}
};


Tovar::~Tovar ()
{
	
}