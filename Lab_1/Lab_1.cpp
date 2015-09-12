#include "stdafx.h"
#include "String.h"
#include <iostream>
#include <stdio.h>
#include <string>


using namespace std;
unsigned int select_sw=0,select_str=0;
const unsigned int size_str=100,size_buf_mas=50 ,size_mas_obj=3;
void menu_user ();

	char str_input[size_str],buf_mas[size_buf_mas], mas[size_buf_mas];
void in_STR (String & mas_object)
{

	for (int i=0;i<size_mas_obj;i++)
	{
		cout<<"Введите строку -"<<i+1<<" : \n";
	    gets_s (str_input);
		mas_object[i].setStr(str_input);
	}
}

void select_STR ()
{
	cout<<"Введите номер строки: "; cin>>select_str;
}


bool search_STR (String & mas_object)
{
	for (int i=0;i<size_mas_obj;i++)
		{
          strcpy_s (str_input,mas_object [i].getLengthStr(),mas_object [i].getStr());

		  int j=0,l=j;

		  			for (int j=0;j<mas_object [i].getLengthStr()-1;j++)
			{
				if (str_input[j]!=' ')
					{

						buf_mas[l]=str_input[j]; 
						l++;
						continue;
				    }
				if (str_input[j]==' ' && strcmp(buf_mas,mas)==0) 
					{
						mas_object [i].printStr(); break;
				    }
				memset(buf_mas, 0, sizeof(buf_mas));
				l=0;
			}
		}
}

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale (LC_CTYPE, "rus");

	String mas_object [size_mas_obj];


	int str_length=0,count=0;
	
	memset(mas, 0, sizeof(mas));
	memset(str_input, 0, sizeof(str_input));
	
	
	cout<<"Вывести строки длиной: "; cin>>str_length;
		for (int i=0;i<size_mas_obj;i++)
	{
		if ((mas_object [i].getLengthStr()-1)==str_length) 
			{
				mas_object [i].printStr(); count++;
		    }
	}
		if (count ==0) cout<<"Строк такой длины - нет!"<<endl;




		cout<<"Введите слово: "<<endl;
		cin>>mas;






		

		switch (menu_user ())
		{
		case 1:in_STR (mas_object);break;
        case 2:;break;
		case 3: cout<<"Длина"<<select_str<<"строки"<<mas_object[select_str-1].getLengthStr()<<"символов"<<endl; break;
        case 4: ;break;
		case 5:;break;
		}

	return 0;
}


int menu_user ()
{
	cout<<"Cделайте выбор:\n";

	cout<<"Ввести строки\n";
	cout<<"Выбрать строку\n";
	cout<<"Получить длину строки\n";
	cout<<"Найти слово в строке\n";
	cout<<"Вывести строки опред. длины\n";
	cin>>select;
}

