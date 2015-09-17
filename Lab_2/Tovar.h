#pragma once

class Tovar
{

private:
	char*brend;
	char*tip_tovara;
	unsigned int stoimost;
	bool skidka;

public:
	Tovar ();
	void setBrend (char*brend);
	void getBrend ();
	void setTip_tovara (char*tip_tovara);
	void getTip_tovara ();
	void setStoimost (unsigned int stoimost);
	void getStoimost ();
	void setSkidka (bool skidka);
	void getSkidka ();
};