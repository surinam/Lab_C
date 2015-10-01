#pragma once
#include "tovar.h"
#include "texnika.h"

class Komputer: public Tovar, public Texnika
{

	
public:
	Komputer (char*,float ,bool,unsigned int ,char*);
	void setBrend ();
	void getBrend () const;
	void setStoimost ();
	void getStoimost () const;
	void setSkidka ();
	void getSkidka () const;
	void setYearManuf ();
	void getYearManuf () const;
	void setVideo_card ();
	void getVideo_card ();
	~Komputer();

private:
	char*model_video_card_;
	unsigned int oper_memory;
};