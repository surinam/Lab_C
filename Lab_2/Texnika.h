#pragma once

class Texnika
{

private:
	char*pereferiy;
	unsigned int oper_memory;
	unsigned int weight;
	
public:
	Texnika ();
	void setPereferiy (char*pereferiy);
	void getPereferiy ();
	void setOper_memory (unsigned int oper_memory);
	void getOper_memory ();
	void setWeight (unsigned int weight);
	void getWeight ();
};