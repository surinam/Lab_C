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
	Printer (char*,float ,bool,unsigned int,unsigned int);
	void setBrend ();
	void getBrend () const;
	void setStoimost ();
	void getStoimost () const;
	void setSkidka ();
	void getSkidka () const;
	void setYearManuf ();
	void getYearManuf () const;
	void setEmkost_ustr_podachi ();
	void getEmkost_ustr_podachi () const;
	~Printer ();
};