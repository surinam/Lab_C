#pragma once
#include "tovar.h"
#include "texnika.h"


class Printer: 
	public Tovar,
	public Texnika
{

private:
	unsigned int emkost_ustr_podachi;
	
public:
	Printer ();
	void setEmkost_ustr_podachi (unsigned int emkost_ustr_podachi);
	void getEmkost_ustr_podachi ();
};