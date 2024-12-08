#include "list.h"

int ContaVette(const Item* i) {

	int res = 0;

	for (const Item* tmp1 = i; !ListIsEmpty(tmp1); tmp1 = ListGetTail(tmp1)) {
		bool check = true;
		for (const Item* tmp2 = ListGetTail(tmp1); !ListIsEmpty(tmp2); tmp2 = ListGetTail(tmp2)) {
			if (ElemCompare(ListGetHeadValue(tmp1), ListGetHeadValue(tmp2)) < 0) {
				check = false;
				break;
			}
		}
		if (check || tmp1->next == NULL) {
			++res;
		}
	}

	return res;
}