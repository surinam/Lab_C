#include "stdafx.h"
#include "texnika.h"
#include <iostream>
using namespace  std;

Texnika::Texnika (char*pereferiy_,float weight_ )
{
	int length=strlen(pereferiy_)+1;
	this->pereferiy_=new char[length];
	if(this->pereferiy_)
	{
		strcpy_s(	this->pereferiy_,length,pereferiy_);
	}
	this->weight_=weight_;
}

void Texnika::setPereferiy ()
{
	cout<<"Введите название устройства переферии: "<<this->pereferiy_<<endl;
}

void Texnika::getPereferiy () const
{
	cout<<"Устройства переферии: "<<this->pereferiy_<<endl;
}


void Texnika::setWeight () 
{
	cout<<"Введите вес устройства: "<<endl;
	cin>>this->weight_;
}

void Texnika::getWeight () const
{
	cout<<"Вес (кг): "<<this->weight_<<endl;
}

Texnika::~Texnika ()
{
//освободить память в куче
	delete [] pereferiy_;

}

