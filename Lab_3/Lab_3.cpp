#include "stdafx.h"
#include "tovar.h"
#include "texnika.h"
#include "printer.h"
#include "skaner.h"
#include "komputer.h"
#include "planchet.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_CTYPE,"rus");
	/*Komputer *p_kom;
	Printer * p_print;
	//�����. ���. � ���� � ����. ��������
	p_kom=new Komputer ("Samsung",15800000,0,2015,"GTX",10,"web-camera",15.3);
	p_print=new Printer("Xerox",5862000,1,2013,85);
	Tovar::add_to_list(p_kom);
	Tovar::add_to_list(p_print);
	Tovar::Show_list();
	Komputer k;
	cout<<"������� ��������� ����������:\n";
	cout<<"C�������� ����������:\n";
	cout<<"������� �� ������ �� ��������� (1-��, 0-���):\n";
	 cout<<"������ �� ��������� ����\n";
	 cout<<"������� ��� ������� ����������:\n";
	 cout<<"������� ������ ����������:\n";
	 cout<<"������ ����������:\n";
	 cout<<"������� ����� ����������� ������ ���������� (��)"<<endl;
	 cout<<"��� ������� ����������:\n";*/
	Komputer h("Samsung",15800000,0,2015,"GTX",10,"web-camera",15.3);
	Planchet g("Apple",15800000,0,2015,10,10,"nauhniki",15.3);
	Planchet g1("Nokia",15800000,0,2015,10,10,"nauhniki",15.3);
	Planchet g2("sdfsdfa",15800000,0,2015,10,10,"nauhniki",15.3);
	h.add_to_tail_list();
	g.add_to_tail_list();
	g1.add_to_front_list();
    /*Laboratorie::delete_list_total();*/
	g2.set(3);
	/*cout<<(Tovar*)(&Laboratorie::get(2))->;*/
	if(Laboratorie::is_empty_list()) cout<<"empty"<<endl;
	h.Show_list();
	return 0;
}

