#include "stdafx.h"
#include "tovar.h"
#include <iostream>


Tovar::Tovar (char* brend_,float stoimost_, bool skidka_, unsigned int year_manuf_)
 {
	length=strlen(brend_)+1;
	this->brend_=new char[length]; //�������� ���. � ����
	if (this->brend_) {strcpy_s(this->brend_,length,brend_);}
	this->stoimost_ =stoimost_;
	this->skidka_=skidka_;
	this->year_manuf_=year_manuf_;
	};

Tovar* Tovar::pHead_=NULL;

//���������� � ��������. ������
void Tovar::add_to_list(Tovar *p_add_obj) //����� ���������� ��������� �� ��
{
	if(!pHead_) //���� ������ ����
	{
		pHead_=p_add_obj; //���������. ������
		p_add_obj->next=NULL; //�������� ����. �� �������. ������. ���������

	}
	else
	{
		Tovar*p_buf=pHead_; //������� ���������
		while(p_buf->next!=NULL) //���� ����� ������� ������� (������. ����������)
		{
			p_buf=p_buf->next;
		};
		p_buf->next=p_add_obj;
		p_add_obj->next=NULL; //� ����� ������. �����. �� ���������
	}
}

//����������� �����.-���� ��������� ������
void Tovar::Show_list()
{
	Tovar*p_buf=pHead_; //������� ���������
	while(p_buf) //���� �� �����
	{
		p_buf->Show(); //������� ������� Show() ������. ������������ �������� ����.(������. ����) p_buf, � �� ��� ����
		p_buf=p_buf->next;
	}
};


Tovar::~Tovar ()
{
	
}