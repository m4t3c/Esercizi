#include "next_greater.h"
#include <stdlib.h>
#include <limits.h>

static size_t ListGetLen(const Item* i) {
	size_t res = 0;

	while (!ListIsEmpty(i)) {
		i = ListGetTail(i);
		++res;
	}
	return res;
}

ElemType* NextGreater(const Item* list, size_t* answer_size) {
	size_t len = ListGetLen(list);
	*answer_size = len;

	if (len == 0) {
		return NULL;
	}

	ElemType* res = calloc(len, sizeof(ElemType));

	for (size_t i = 0; i < len; ++i) {
		Item* tmp = list->next;
		while (!ListIsEmpty(tmp))
		{
			if (list->value < tmp->value) {
				res[i] = tmp->value;
				break;
			}
			tmp = ListGetTail(tmp);
		}
		if (ListIsEmpty(tmp)) {
			res[i] = INT_MIN;
		}
		list = ListGetTail(list);
	}
	return res;
}