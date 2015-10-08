#pragma once
#include "tovar.h"
#include "texnika.h"


class Printer: 
	public Tovar,
	public Texnika
{

private:
	unsigned int emkost_ustr_podachi_;
	
public:
	Printer (char* brend_="no brend", float stoimost_=NULL, bool skidka_=false,unsigned int year_manuf_=NULL,unsigned int emkost_ustr_podachi_=NULL);
	char*type_tech();
	void setYearManuf ();
	void getYearManuf () const;
	void setEmkost_ustr_podachi ();
	void getEmkost_ustr_podachi () const;
	void Show()const;
	~Printer ();
};