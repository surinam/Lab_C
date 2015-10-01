#pragma once
#include <iostream>
//абстрактный класс
class Tovar
{
protected:
	static Tovar* pHead_; //не содержитс€ ни в одном объекте класса (обща€ дл€ всех), созд. только один раз (в отлич. от локал.)
	unsigned int length;
	static void show ();
	static void add_to_list(Tovar *p_add_obj);
	Tovar *next; //указ. объ€вл. можно, а объекты типа Tovar в самом кл. Tovar-нельз€
	char* brend_;
	float stoimost_;
	bool skidka_;
	unsigned int year_manuf_;

public:
	Tovar(){};
	Tovar (char*,float , bool, unsigned int);
 	//пустые (чистые) виртуальные функции-члены кл.
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

