#pragma once
#include "tovar.h"
#include "texnika.h"

class Komputer: public Tovar, public Texnika
{

	
public:
	Komputer (char* brend_="no brend", unsigned int stoimost_=NULL, 
		      bool skidka_=false, unsigned int year_manuf_=NULL, 
			  char*model_video_card_="no model",unsigned int oper_memory_=NULL,
			  char*pereferiy_="not",float weight_=NULL);

    char *type_tech() const;
	void setVideo_card (char *model_video_card_);
	char *getVideo_card ()const;
	void setOper_memory (unsigned int oper_memory_);
	unsigned int getOper_memory ()const;
	void Show_fields_elem() const;
	~Komputer();

private:
	char*model_video_card_;
	unsigned int oper_memory_;
};