#include "stdafx.h"
#include "printer.h"
#include <iostream>

using namespace  std;

Printer::Printer ()
{
	cout<<"������ ����������� �������"<<endl;
}

void Printer::setEmkost_ustr_podachi (unsigned int emkost_ustr_podachi)
{
	this->emkost_ustr_podachi=emkost_ustr_podachi;
}

void Printer::getEmkost_ustr_podachi ()
{
	cout<<"������� ��������� ������ (���.): "<<this->emkost_ustr_podachi<<endl;
}

Printer::~Printer ()
{
	cout<<"������ ������������� ��������"<<endl;
}



