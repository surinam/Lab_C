#pragma once
#include "tovar.h"
#include "texnika.h"

class Planchet: 
	public Tovar,
	public Texnika
{

private:
	float front_camera;
	float rear_camera;
	
public:
	Planchet ();
	void setFront_camera (float front_camera);
	void getFront_camera ();
	void setRear_camera (float rear_camera);
	void getRear_camera ();
};