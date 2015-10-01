#pragma once
#include <iostream>
//����������� �����
class Tovar
{
protected:
	static Tovar* pHead_; //�� ���������� �� � ����� ������� ������ (����� ��� ����), ����. ������ ���� ��� (� �����. �� �����.)
	unsigned int length;
	Tovar *next; //����. ������. �����, � ������� ���� Tovar � ����� ��. Tovar-������
	char* brend_;
	float stoimost_;
	bool skidka_;
	unsigned int year_manuf_;

public:
	Tovar (char* brend_="no brend",float stoimost_=NULL, bool skidka_=false, unsigned int year_manuf_= NULL);
 	//������ (������) ����������� �������-����� ��.
	virtual void setBrend ()=0;
	virtual void getBrend () const=0;
	virtual void setStoimost ()=0;
	virtual void getStoimost () const=0;
	virtual void setSkidka ()=0;
	virtual void getSkidka () const=0;
	virtual void setYearManuf ()=0;
	virtual void getYearManuf () const=0;
	virtual void Show() const=0; //�������� ��� ����
    static void add_to_list(Tovar *p_add_obj);
    static void Show_list ();
	virtual ~Tovar ();
	
};

