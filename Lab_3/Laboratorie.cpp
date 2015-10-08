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
	if(is_empty_list()) //���� ������ ����
	{
		pHead=this; //���������. ������
		this->pNext=NULL; //�������� ����. �� �������. ������. ���������-�������. ������� �����
	
	}
	else
	{
		Laboratorie*p_buf=pHead; //������� ���������
		while(p_buf->pNext!=NULL) //���� ����� ������� ������� (������. ����������)
		{
			p_buf=p_buf->pNext;
		};
		p_buf->pNext=this;
		this->pNext=NULL; //� ����� ������. �����. �� ���������-����. �����. �����
	}
	++count;
}

void Laboratorie::add_to_front_list()
{
	if(is_empty_list()) //���� ������ ����
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
	Tovar*p_buf=static_cast<Tovar*>(pHead); //������� ���������
	while(p_buf) //���� �� �����
	{
		p_buf->Show(p_buf); //������� ������� Show() ������ Tovar
		p_buf=static_cast<Tovar*>(p_buf->pNext);
	}
}

//������� � �������� ��������
Laboratorie& Laboratorie::get(unsigned int index)
{
	unsigned int count_1=NULL;
	Laboratorie*p_buf=pHead;
	if(index>=NULL && index<=count) //����. �� �����. ����. ����. � ������. �����. � ������
	{
		while(count_1!=index-1)
		{
			p_buf=p_buf->pNext;
			count_1++;//����. �������
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
		//���������� ������ 
		p_buf_1->pNext=this;
		this->pNext=p_buf_2;
	}
}

void Laboratorie::delete_list_total()
{
	Laboratorie*delete_elem=pHead;
	while(count!=NULL)
	{
		pHead=pHead->pNext;//�����. ����� �������. �� ���������
		delete delete_elem; //�����. ������ � ����
		--count; //��������� �������
		delete_elem=pHead;//�����. ����� ����� ������
	}
}

void Laboratorie::delete_elem_from_list(unsigned int index)
{
	Laboratorie*p_buf_1=NULL,*p_buf_2=NULL;
	if(index>=NULL && index<=count)
	{
		p_buf_1=&(get(index-1));
		p_buf_2=&(get(index+1));
		p_buf_1->pNext=p_buf_2;//"����������" ����� ����
		delete this;
	}
}
//����������� ������� �������� �� �������
bool Laboratorie::is_empty_list()
{
	return pHead==NULL;
}

Laboratorie::~Laboratorie()
{}