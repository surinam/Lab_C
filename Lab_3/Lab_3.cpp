#include "stdafx.h"
#include <iostream>
#include "tovar.h"
#include "texnika.h"
#include "printer.h"
#include "skaner.h"
#include "komputer.h"
#include "planchet.h"
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_CTYPE,"rus");
	Komputer *p_kom;
	Printer * p_print;
	//выдел. пам. в куче и иниц. объектов
	p_kom=new Komputer ("Samsung",15800000,0,2015,"GTX",10,"web-camera",15.3);
	p_print=new Printer("Xerox",5862000,1,2013,85);
	Tovar::add_to_list(p_kom);
	Tovar::add_to_list(p_print);
	Tovar::Show_list();

	return 0;
}

