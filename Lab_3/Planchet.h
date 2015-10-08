#pragma once
#include "tovar.h"
#include "texnika.h"

class Planchet: 
	public Tovar,
	public Texnika
{



private:
	unsigned int front_camera_;
	unsigned int rear_camera_;
	
public:
	//в конструкторе исп. значениия по умолчанию
	Planchet (char* brend_="no brend", unsigned int stoimost_=NULL, 
		      bool skidka_=false, unsigned int year_manuf_=NULL, 
			  unsigned int front_camera_=NULL,unsigned int rear_camera_=NULL,
			  char*pereferiy_="not",float weight_=NULL);

	char* type_tech() const;
	void setFront_camera (unsigned int front_camera_);
	unsigned int getFront_camera () const;
	void setRear_camera (unsigned int rear_camera_);
	unsigned int getRear_camera () const;
	void Show_fields_elem() const; //переопред. функцию иначе класс Planchet -АПК
	~Planchet ();
};