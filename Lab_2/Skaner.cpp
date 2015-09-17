#include "stdafx.h"
#include "skaner.h"
#include <iostream>

using namespace  std;

Skaner::Skaner ()
{
	cout<<"Вызван конструктор сканер"<<endl;
}

void Skaner::setSpeed_scan_color(unsigned int speed_scan_color)
{
	this->speed_scan_color=speed_scan_color;
}

void Skaner::getSpeed_scan_color ()
{
	cout<<"Скорость сканирования (цвет.): "<<this->speed_scan_color<<endl;
}

