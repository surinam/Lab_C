#pragma once
#include "tovar.h"
#include "texnika.h"

class Komputer: 
	public Tovar,
	public Texnika
{

private:
	char*video_card;
	
public:
	Komputer ();
	void setVideo_card (char*video_card);
	void getVideo_card ();
};