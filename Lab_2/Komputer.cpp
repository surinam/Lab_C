#include "stdafx.h"
#include "komputer.h"
#include <iostream>

using namespace  std;

Komputer::Komputer ()
{
	cout<<"������ ����������� ���������"<<endl;
}

void Komputer::setVideo_card (char*video_card)
{
	this->video_card=video_card;
}

void Komputer::getVideo_card ()
{
	cout<<"����������: "<<this->video_card<<endl;
}



