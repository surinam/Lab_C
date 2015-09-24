#pragma once
#include <string>

class Tovar
{

private:
	char*brend;
	char*tip_tovara;
	float stoimost;
	bool skidka;

public:
	Tovar ();
	Tovar (char* brend,char* tip_tovara,float stoimost, bool skidka);
	void setBrend (char*brend);
	void getBrend ();
	void setTip_tovara (char*tip_tovara);
	void getTip_tovara ();
	void setStoimost (float stoimost);
	void getStoimost ();
	void setSkidka (bool skidka);
	void getSkidka ();
	~Tovar ();
};