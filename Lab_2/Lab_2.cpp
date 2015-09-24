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
	char mas_1[20],mas_2[20];
	float stoimost=0;
	bool yes_no_skidk=false;
	int speed=0,ves=0;

	cout<<"Введите информацию о сканере:"<<endl;
	cout<<"Бренд:"; cin>>mas_1;
	cout<<"Тип товара:"; cin>>mas_2;
	cout<<"Введите стоимость:"; cin>>stoimost;
	cout<<"Скидка (да-1, нет-0):"; cin>>yes_no_skidk;
	cout<<"Скорость сканирования:"; cin>>speed;

	cout<<"Вес товара:"; cin>>ves;


	Skaner scan(mas_1,mas_2,stoimost,yes_no_skidk,speed);

	scan.getBrend();
	scan.getSpeed_scan_color();
	scan.getTip_tovara();
	scan.getWeight();
	
	
	return 0;
}
