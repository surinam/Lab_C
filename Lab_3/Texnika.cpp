#include "stdafx.h"
#include "texnika.h"
#include <iostream>

using namespace  std;

Texnika::Texnika ()
{
	cout<<"������ ����������� �������"<<endl;
}

void Texnika::setPereferiy (char*pereferiy)
{
	this->pereferiy=pereferiy;
}

void Texnika::getPereferiy ()
{
	cout<<"���������� ���������: "<<this->pereferiy<<endl;
}

/*void Texnika::setOper_memory (unsigned int oper_memory)
{
	this->oper_memory=oper_memory;
}

void Texnika::getOper_memory ()
{
	cout<<"����������� ������: "<<this->oper_memory<<endl;
}*/

void Texnika::setWeight (float weight)
{
	this->weight=weight;
}

void Texnika::getWeight ()
{
	cout<<"��� (��): "<<this->weight<<endl;
}

Texnika::~Texnika ()
{
	cout<<"������ ������������� �������"<<endl;

}

