#pragma once
#include <iostream>
#include "laboratorie.h"

//����������� �����
class Tovar: public Laboratorie
{
protected:
	unsigned int length;
	char* brend_;
	unsigned int stoimost_;
	bool skidka_;
	unsigned int year_manuf_;

public:
	Tovar (char* brend_="no brend",unsigned int stoimost_=NULL, bool skidka_=false, unsigned int year_manuf_= NULL);
 	void setBrend (char*p_str);
	char* getBrend () const;
	void setStoimost (unsigned int stoimost_ );
	unsigned int getStoimost () const;
    void setSkidka (bool skidka_);
	bool getSkidka () const;
	void setYearManuf (unsigned int year_manuf_);
    unsigned int getYearManuf () const;

	//������ ����������� �������-���� ������
	virtual char*type_tech() const=0;
	virtual void Show_fields_elem() const=0; //�������� ����, ���������� � ��

    void Show(Tovar*); // �������� ���� ���
	~Tovar ();
	
};

