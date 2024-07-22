#include "cc.h"

int ComponentiConnesse(const Item* i, const ElemType* v, size_t v_size) {

	int  connesse = 0;
	bool in = false;

	while (!ListIsEmpty(i))	{

		ElemType tmp = i->value;
		bool found = false;
		for (size_t i = 0; i < v_size; i++)	{
			if (tmp == v[i]) {
				found = true;
				in = true;
				break;
			}
		}

		if (in == true && found == false) { //quando viene interrotta la streak di elementi presenti sia nella lista che nel vettore
			connesse++;
			in = false;
		}

		i = ListGetTail(i);
	}

	if (in == true) { //se la lista finisce e sono ancora in streak di elementi consecutivi
		connesse++;
	}

	return connesse;
}