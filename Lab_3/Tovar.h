#pragma once
#include <iostream>
//����������� �����
class Tovar
{
protected:
	static Tovar* pHead_; //�� ���������� �� � ����� ������� ������ (����� ��� ����), ����. ������ ���� ��� (� �����. �� �����.)
	unsigned int length;
	static void show ();
	static void add_to_list(Tovar *p_add_obj);
	Tovar *next; //����. ������. �����, � ������� ���� Tovar � ����� ��. Tovar-������
	char* brend_;
	float stoimost_;
	bool skidka_;
	unsigned int year_manuf_;

public:
	Tovar(){};
	Tovar (char*,float , bool, unsigned int);
 	//������ (������) ����������� �������-����� ��.
	virtual void setBrend ()=0;
	virtual void getBrend () const=0;
	virtual void setStoimost ()=0;
	virtual void getStoimost () const=0;
	virtual void setSkidka ()=0;
	virtual void getSkidka () const=0;
	virtual void setYearManuf ()=0;
	virtual void getYearManuf () const=0;
	virtual ~Tovar ();
	
};

