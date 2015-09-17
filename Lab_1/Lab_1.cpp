#include "stdafx.h"
#include "String.h"
#include <iostream>
#include <stdio.h>

using namespace std;

const unsigned int size_str=100, size_buf_str=50,size_mas_obj=3;


char c,c1,str_input[size_str], mas[size_buf_str];


int menu_user ()
{
	unsigned int select=0;
	cout<<"Select:\n";
	cout<<"Print lines of a certain length- 1:\n";
	cout<<"List of strings with a given word- 2:\n";
	cout<<"Exit- 0:\n";
	cin>>select;
	return select;
}

	



void in_Str (String *mas_obj)
{
    
	for (int i=0;i<size_mas_obj;i++)
	{
		memset(str_input, 0, sizeof(str_input));
		cout<<"Input string - "<<i+1<<" : ";
	    gets_s(str_input);
		mas_obj[i].setStr(str_input);
	}
}



void out_Str_fixe_length (String *mas_obj)
{
	unsigned int str_length=0,count=0;

	cout<<"Print line length: "; 
	cin>>str_length;

	for (int i=0;i<size_mas_obj;i++)
	{
		if ((mas_obj [i].getLengthStr()-1)==str_length) 
			{
				mas_obj [i].printStr(); 
				count++;
		    }
	}

	if (count==0) cout<<"Lines this long - no!"<<endl;
}



void search_Str (String * mas_obj)
{
	char*p_Str=NULL;
	memset(str_input, 0, sizeof(str_input));

	cout<<"Enter the word: "<<endl;
	cin>>mas;

	for (int i=0;i<size_mas_obj;i++)
	{
       p_Str=mas_obj [i].getStr();

		 for (int j=0,l=j;j<mas_obj [i].getLengthStr();j++)
	     {
				if (p_Str[j]!=' ' && p_Str[j]!='\0')
				{

						str_input[l]=p_Str[j]; 
						l++;
						continue;
				}
				if (strcmp(str_input,mas)==0) 
				{
						mas_obj [i].printStr(); break;
				}

				memset(str_input, 0, sizeof(str_input));
				l=0;
		}
	}
}


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale (LC_CTYPE, "rus");
	cout<<"Input string"<<endl;
	gets_s(str_input);
	String s(str_input); 
	cout<<"Input symbol"<<endl;
	cin>>c;
	s.isSymbStr (c);
	cout<<"Replace the symbol (input)"<<endl;
	cin>>c;
	cout<<"symbol (input)"<<endl;
	cin>>c1;
	s.replacSymbStr (c,c1);
	s.printStr ();
	String mas_object [size_mas_obj];
	in_Str (mas_object);
	
	
do
{

  switch (menu_user ())
  {
	case 1:out_Str_fixe_length(mas_object); break;
    case 2:search_Str (mas_object); break;
    case 0: return 1;
  }

} while (true); 

	return 0;
}


