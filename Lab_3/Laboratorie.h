#pragma once
#include "tovar.h"

class Laboratorie
{
public:
	Laboratorie();
	void add_to_tail_list();
	void add_to_front_list();
	static void Show_list();
	static Laboratorie& get(unsigned int index);
	void set(unsigned int index);
	static void delete_list_total();
	void delete_elem_from_list(unsigned int index);
	static bool is_empty_list();
	virtual ~Laboratorie();
protected:
	static Laboratorie*pHead;//не содержитс€ ни в одном объекте класса (обща€ дл€ всех), созд. только один раз (в отлич. от локал.)
	static unsigned int count;
	Laboratorie*pNext;//указ. объ€вл. можно, а объекты типа Laboratorie в самом кл. Laboratorie-нельз€
};