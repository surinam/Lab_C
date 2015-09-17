#include "stdafx.h"
#include "tovar.h"
#include "texnika.h"
#include "printer.h"
#include "skaner.h"
#include "komputer.h"
#include "planchet.h"
#include <iostream>

using namespace  std;



int _tmain(int argc, _TCHAR* argv[])
{
	setlocale (LC_CTYPE,"rus");
	Tovar tov;
	tov.setBrend("Apple");
	tov.getBrend ();
	tov.setSkidka(true);
	tov.getSkidka();
	tov.setStoimost(2698000);
	tov.getStoimost();
	tov.setTip_tovara("Бытовая техника");
	tov.getTip_tovara ();

	Skaner scan;
	scan.setBrend ("Epson");
	scan.getBrend ();
	scan.setSkidka (false);
	scan.getSkidka ();
	scan.setStoimost (5520000);
	scan.getStoimost ();
	scan.setWeight (2.8);
	scan.getWeight ();

	return 0;
}

