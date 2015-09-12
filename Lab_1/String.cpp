#include "stdafx.h"
#include "String.h"
#include <string.h>
#include <iostream>

String::String ()
{
	std::cout<<"������ ����������� �� ���������"<<std::endl;
	p_str="";
	length=0;
}

String::String (char*str)
{
	std::cout<<"������ ����������� c ����������"<<std::endl;
	p_str=new char [length=strlen(str)];
	strcpy_s (p_str,length,str);
}

String::String (const String & str)
{
	std::cout << "����� ������������ �����������"<<std::endl;
	p_str=new char [str.length];
	strcpy_s (p_str,str.length,str.p_str);
	length=str.length;

}
String::~String ()
{
	delete [] p_str;
	
}

void String::setStr (char*str)
{
	p_str=new char [length=strlen(str)+1];
	strcpy_s (p_str,length,str);
}

 char* String::getStr () const
 {
	 return p_str;
 }

 int String::getLengthStr () const
 {
	 return length;
 }

void String::printStr () const
{
	std::cout<<"String: "<<p_str<<std::endl;
}

void String::printLengthStr () const
 {
	 std::cout<<"����� ������:"<<length-1<<" �������(��)"<<std::endl;
 }

 void String::isSymbStr (char s) const /*strchr (p_str,s)*/
 {
	
	 unsigned int count=0;
	 for (int i=0;i<length;i++)
	 {
		 if (s==p_str[i]) count++;
	 }
	 if (count!=0)std::cout<<"����� ������ ����������!"<<" ���������� ���������: "<<count<<" ���(�)"<<std::endl;
	    else std::cout<<"������ ������� � ������ ���!"<<std::endl;
 }

 void String::replacSymbStr (char a,char b)
 {
	  char*p=strchr (p_str,a);
	  *p=b;
 }