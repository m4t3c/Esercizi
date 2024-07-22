#include "pulce.h"

int main(void) {

	ElemType vec[] = { 2, -3, 4, 1, 0, 5, -12, 3 };
	Item* i = DListCreateEmpty();
	for (size_t j = 0; j < 8; ++j) {
		i = DListInsertBack(i, &vec[j]);
	}

	const Item* res = CalcolaPercorso(i->next->next, 13);

	return 0;
}