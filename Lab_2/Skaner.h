#pragma once
#include "tovar.h"
#include "texnika.h"

class Skaner: 
	public Tovar,
	public Texnika
{

private:
	unsigned int speed_scan_color;
	
public:
	Skaner ();
	void setSpeed_scan_color(unsigned int speed_scan_color);
	void getSpeed_scan_color ();
};

