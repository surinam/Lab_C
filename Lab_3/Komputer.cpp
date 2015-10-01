#include "stdafx.h"
#include "komputer.h"
#include <iostream>
typedef unsigned int N;
using namespace  std;

Komputer::Komputer (char* brend_, float stoimost_, bool skidka_, N year_manuf_, char*model_video_card_="no model",N oper_memory_=0)
	:Tovar(brend_,stoimost_,skidka_,year_manuf_), Texnika()
{
	length=strlen(model_video_card_)+1;
	this->model_video_card_=new char[length];
	if(this->model_video_card_)
	{
		strcpy_s(	this->model_video_card_,length,model_video_card_);
	}
	this->oper_memory_=oper_memory_;
};

void Komputer::setBrend()
{
	cout<<"Введите бренд компьютера:\n";
	char*p=this->brend_;
	delete [] p;
	char brend_[10];
	cin>>brend_;
	length=strlen(brend_)+1;
	this->brend_=new char[length];
	if(this->brend_)
	{
		strcpy_s(this->brend_,length,brend_);
	}

}

void Komputer::getBrend () const
{
	cout<<"Бренд компьютера:\n";
	cout<<this->brend_<<endl;
}

void Komputer::setStoimost ()
{
	cout<<"Введите стоимость компьютера:\n";
	cin>>this->stoimost_;
}

void Komputer::getStoimost () const
{
	cout<<"Cтоимость компьютера:\n";
	cout<<this->stoimost_<<endl;
}
void Komputer::setSkidka ()
{
	cout<<"Имеется ли скидка на компьютер (1-да, 0-нет):\n";
	cin>>this->skidka_;
}

void Komputer::getSkidka () const
{
	if(this->skidka_) cout<<"Скидка на компьютер есть\n";
}

void Komputer::setYearManuf()
{
	cout<<"Введите год выпуска компьютера:\n";
	cin>>this->year_manuf_;

}

void Komputer::getYearManuf() const
{
	cout<<"Год выпуска компьютера:\n";
	cout<<this->year_manuf_<<endl;
}

void Komputer::setVideo_card ()
{
	char mas[20];
	cout<<"Введите модель видеокарты:\n";
	cin>>mas;
	length=strlen(mas)+1;
	this->model_video_card_=new char[length];
	if(this->model_video_card_)
	{
		strcpy_s(this->model_video_card_,length,mas);
	}
}

void Komputer::getVideo_card () const
{
	
	cout<<"Модель видеокарты:\n";
	cout<<this->model_video_card_<<endl;
}

Komputer::~Komputer ()
{
	
	cout<<"Вызван деконструктор компьютер"<<endl;
	//освобожд. память в куче
	if(model_video_card_ && brend_)
	{
	delete [] model_video_card_;
	delete [] this->brend_;
	}
}

void Komputer::setOper_memory ()
{
	cout<<"Введите объем оперативной память компьютера (Гб)"<<endl;
	cin>>this->oper_memory_;
}

void Komputer::getOper_memory ()const
{
	cout<<"Оперативная память (Гб): "<<this->oper_memory_<<endl;
}
void Komputer:: Show()const
{
	cout<<"Информация о компьютере:\n";
    this->getBrend();
	this->getStoimost();
	this->getSkidka();
	this->getVideo_card();
	this->getYearManuf();
	this->getWeight();
	this->getPereferiy();
	this->getOper_memory();
			
}


