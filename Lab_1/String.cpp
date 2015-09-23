#include "stdafx.h"
#include "String.h"
#include <string.h>
#include <iostream>

String::String ()
{
	std::cout<<"Call the default constructor"<<std::endl;
	p_str=NULL;
	length=0;
}

String::String (char*str)
{
	std::cout<<"Call the constructor parameter "<<std::endl;
	p_str=new char [strlen(str)];
	if (p_str)
	{
     length=strlen(str)+1;
	 strcpy_s (p_str,length,str);
	}
}

String::String (const String & str)
{
	std::cout << "Call the copy constructor"<<std::endl;
	p_str=new char [str.length];
	if (p_str)
	{
	 strcpy_s (p_str,str.length,str.p_str);
	 length=str.length;
	}
}
String::~String ()
{
	if (p_str)
	{
	  delete [] p_str;
	}
	
}

void String::setStr (char*str)
{
	if (p_str)
	{
	 memset(p_str, 0, sizeof(p_str));
     length=strlen(str)+1;
	 strcpy_s (p_str,length,str);
	}
	else
	{
		p_str=new char [strlen(str)];
		if (p_str)
		{
		length=strlen(str)+1;
	    strcpy_s (p_str,length,str);
		}

	}
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
	if (p_str)
	{
	 std::cout<<"String: "<<p_str<<std::endl;
	}
	else std::cout<<"String - empty "<<std::endl;
}

void String::printLengthStr () const
 {
	 if (length)
	 {
	 std::cout<<"Length of string:"<<length-1<<" symbol(s)"<<std::endl;
	 }
	 else std::cout<<"Length of string - 0"<<std::endl;
 }

 void String::isSymbStr (char s) const /*strchr (p_str,s)*/
 {
	
	 unsigned int count=0;
	 for (int i=0;i<this->length;i++)
	 {
		 if (s==this->p_str[i]) count++;
	 }
	 if (count!=0)std::cout<<"This symbol exists!"<<" Number of occurrences: "<<count<<" time(s)"<<std::endl;
	    else std::cout<<"This symbol in the string is not!"<<std::endl;
 }

 void String::replacSymbStr (char a,char b)
 {
	  char*p=strchr (p_str,a);
         if (p)
         {
          *p=b;
         }
 }