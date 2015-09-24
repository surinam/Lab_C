#include "stdafx.h"
#include "skaner.h"
#include <iostream>

using namespace  std;

Skaner::Skaner ()
{
	cout<<"Вызван конструктор сканер"<<endl;
}

Skaner::Skaner (char*_brend,char* _tip_tovara,float _stoimost, bool _skidka,unsigned int _speed_scan_color ):
	Tovar (_brend,_tip_tovara, _stoimost,  _skidka), speed_scan_color(_speed_scan_color)
	{};

void Skaner::setSpeed_scan_color(unsigned int speed_scan_color)
{
	this->speed_scan_color=speed_scan_color;
}

void Skaner::getSpeed_scan_color ()
{
	cout<<"Скорость сканирования (цвет.): "<<this->speed_scan_color<<endl;
}

Skaner::~Skaner ()
{
	cout<<"Вызван деконструктор сканера"<<endl;
}

