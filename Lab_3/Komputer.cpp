#include "stdafx.h"
#include "komputer.h"
#include <iostream>
typedef unsigned int u_int;
using namespace  std;

Komputer::Komputer (char*brend_,unsigned int stoimost_ ,bool skidka_,u_int year_manuf_,
					char* model_video_card_,u_int oper_memory_,char*pereferiy_,float weight_)
	:Tovar(brend_,stoimost_,skidka_,year_manuf_), Texnika(pereferiy_,weight_),oper_memory_(oper_memory_)
{
	setVideo_card(model_video_card_);
	
}

char *Komputer::type_tech() const
{
	return "компьютера";
}





void Komputer::setVideo_card (char *model_video_card_)
{
	
	length=strlen(model_video_card_)+1;
	this->model_video_card_=new char[length];
	if(this->model_video_card_)
	{
		strcpy_s(this->model_video_card_,length,model_video_card_);
	}
}

char *Komputer::getVideo_card () const
{
	return this->model_video_card_;
}


void Komputer::setOper_memory (unsigned int oper_memory_)
{
	this->oper_memory_=oper_memory_;
}

unsigned int Komputer::getOper_memory ()const
{
	return this->oper_memory_;
}


Komputer::~Komputer ()
{
	//освобожд. память в куче
	if(model_video_card_)
	{
	delete [] model_video_card_;
	}
}

void Komputer::Show_fields_elem() const
{
	cout<<"Модель видеокарты "<<type_tech()<<":";
	cout<<this->getVideo_card();
	cout<<endl;
	cout<<"Оперативная память (Гб) "<<type_tech()<<":";
	cout<<this->getOper_memory();
	cout<<endl;

}

