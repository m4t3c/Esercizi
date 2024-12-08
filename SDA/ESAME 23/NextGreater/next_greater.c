#include "next_greater.h"
#include <stdlib.h>
#include <limits.h>

ElemType* NextGreater(const Item* list, size_t* answer_size) {

	if (ListIsEmpty(list)) {
		*answer_size = 0;
		return NULL;
	}

	ElemType* res = malloc(sizeof(ElemType));
	size_t size = 1;
	while (!ListIsEmpty(list)) {
		Item* tmp = list->next;
		for (; !ListIsEmpty(tmp); tmp = ListGetTail(tmp)) {
			if (ElemCompare(ListGetHeadValue(tmp), ListGetHeadValue(list)) > 0) {
				res[size - 1] = *ListGetHeadValue(tmp);
				++size;
				res = realloc(res, size * sizeof(ElemType));
				break;
			}
		}
		if (ListIsEmpty(tmp)) {
			res[size - 1] = INT_MIN;
			++size;
			res = realloc(res, size * sizeof(ElemType));
		}
		list = ListGetTail(list);
	}

	--size;
	res = realloc(res, size * sizeof(ElemType));
	*answer_size = size;
	return res;
}