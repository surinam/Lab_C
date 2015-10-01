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
	Komputer f("dfdf",315611,0,2015,"GForce");
	f.getBrend();
	f.getSkidka();
	Printer g("ee",315611,1,2015,52);
	g.getSkidka();

	return 0;
}

