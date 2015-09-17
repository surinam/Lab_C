#include "stdafx.h"
#include "printer.h"
#include <iostream>

using namespace  std;

Printer::Printer ()
{
	cout<<"Вызван конструктор принтер"<<endl;
}

void Printer::setEmkost_ustr_podachi (unsigned int emkost_ustr_podachi)
{
	this->emkost_ustr_podachi=emkost_ustr_podachi;
}

void Printer::getEmkost_ustr_podachi ()
{
	cout<<"Емкость устройств подачи (стр.): "<<this->emkost_ustr_podachi<<endl;
}

Printer::~Printer ()
{
	cout<<"Вызван деконструктор принтера"<<endl;
}



