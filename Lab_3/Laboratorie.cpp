#pragma once
#include "stdafx.h"
#include <iostream>
#include "tovar.h"
#include "laboratorie.h"
#include "komputer.h"

Laboratorie *Laboratorie::pHead=NULL;
unsigned int Laboratorie::count=NULL;

Laboratorie::Laboratorie()
{
}

void Laboratorie::add_to_tail_list()
{
	if(is_empty_list()) //если список пуст
	{
		pHead=this; //инициализ. голову
		this->pNext=NULL; //занулить указ. на следующ. структ. переменую-обознач. признак конца
	
	}
	else
	{
		Laboratorie*p_buf=pHead; //рабочий указатель
		while(p_buf->pNext!=NULL) //если далее имеется элемент (структ. переменная)
		{
			p_buf=p_buf->pNext;
		};
		p_buf->pNext=this;
		this->pNext=NULL; //у вновь добавл. обнул. на следующий-обоз. призн. конца
	}
	++count;
}

void Laboratorie::add_to_front_list()
{
	if(is_empty_list()) //если список пуст
	{
		pHead=this;
		this->pNext=NULL;
	}
	else
	{
		this->pNext=pHead;
		pHead=this;
	}
	++count;
}

void Laboratorie::Show_list()
{
	Tovar*p_buf=static_cast<Tovar*>(pHead); //рабочий указатель
	while(p_buf) //пока не конец
	{
		p_buf->Show(p_buf); //вызвать функцию Show() класса Tovar
		p_buf=static_cast<Tovar*>(p_buf->pNext);
	}
}

//вернуть с заданным индексом
Laboratorie& Laboratorie::get(unsigned int index)
{
	unsigned int count_1=NULL;
	Laboratorie*p_buf=pHead;
	if(index>=NULL && index<=count) //пров. на соотв. ввод. знач. с реальн. колич. в списке
	{
		while(count_1!=index-1)
		{
			p_buf=p_buf->pNext;
			count_1++;//увел. счетчик
		}
	}
	return *p_buf; 
}

void Laboratorie::set(unsigned int index)
{
	Laboratorie*p_buf_1=NULL;
	Laboratorie*p_buf_2=NULL;
	if(index>=NULL && index<=count)
	{
		p_buf_1=&(get(index-1));
		p_buf_2=&(get(index));
		//раздвигаем список 
		p_buf_1->pNext=this;
		this->pNext=p_buf_2;
	}
}

void Laboratorie::delete_list_total()
{
	Laboratorie*delete_elem=pHead;
	while(count!=NULL)
	{
		pHead=pHead->pNext;//запом. адрес следующ. за удаляемым
		delete delete_elem; //освоб. память в куче
		--count; //уменьшаем счетчик
		delete_elem=pHead;//запом. адрес новой головы
	}
}

void Laboratorie::delete_elem_from_list(unsigned int index)
{
	Laboratorie*p_buf_1=NULL,*p_buf_2=NULL;
	if(index>=NULL && index<=count)
	{
		p_buf_1=&(get(index-1));
		p_buf_2=&(get(index+1));
		p_buf_1->pNext=p_buf_2;//"перемыкаем" через один
		delete this;
	}
}
//статическая функция проверки на пустоту
bool Laboratorie::is_empty_list()
{
	return pHead==NULL;
}

Laboratorie::~Laboratorie()
{}