#pragma once
#include "tovar.h"
#include "texnika.h"
typedef unsigned int N;
class Komputer: public Tovar, public Texnika
{

	
public:
	Komputer (char* brend_="no brend", float stoimost_=NULL, bool skidka_=false, N year_manuf_=NULL, char*model_video_card_="no model",N oper_memory_=NULL,char*pereferiy_="not",float weight_=NULL);
	//все функции виртуальные
	void setBrend ();
	void getBrend () const;
	void setStoimost ();
	void getStoimost () const;
	void setSkidka ();
	void getSkidka () const;
	void setYearManuf ();
	void getYearManuf () const;
    void Show()const;
	//
	void setVideo_card ();
	void getVideo_card ()const;
	void setOper_memory ();
	void getOper_memory ()const;
	~Komputer();

private:
	char*model_video_card_;
	unsigned int oper_memory_;
};