#pragma once

class Texnika
{

private:
	char*pereferiy;
	float weight;
	
public:
	Texnika ();
	void setPereferiy (char*pereferiy);
	void getPereferiy ();
	void setOper_memory (unsigned int oper_memory);
	void getOper_memory ();
	void setWeight (float weight);
	void getWeight ();
	~Texnika ();
};