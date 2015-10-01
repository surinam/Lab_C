#pragma once

class Texnika
{

private:
	char*pereferiy_;
	float weight_;
	
public:
	Texnika (char*pereferiy_="not",float weight_=NULL);
	void setPereferiy ();
	void getPereferiy () const;
	void setWeight () ;
	void getWeight () const;
	~Texnika ();
};