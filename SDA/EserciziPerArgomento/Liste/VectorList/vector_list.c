#include "vector_list.h"
#include <stdlib.h>

Item* Vector2List(const ElemType* v, size_t v_size, enum ConversionType c) {

	if (v == NULL) {
		return ListCreateEmpty();
	}

	Item* res = ListCreateEmpty();

	if (c == KInOrder) {
		for (size_t i = 0; i < v_size; ++i) {
			res = ListInsertBack(res, &v[i]);
		}
	}
	else
	{
		for (size_t i = 0; i < v_size; ++i) {
			res = ListInsertHead(&v[i], res);
		}
	}

	return res;
}

ElemType* List2Vector(const Item* i, size_t* v_size, enum ConversionType c) {

	if (ListIsEmpty(i)) {
		*v_size = 0;
		return NULL;
	}

	size_t size_tmp = 0;
	const Item* tmp = i;
	while (!ListIsEmpty(tmp))
	{
		++size_tmp;
		tmp = ListGetTail(tmp);
	}

	ElemType* res = malloc(size_tmp * sizeof(ElemType)); 
	if (c == KInOrder) {
		for (size_t j = 0; j < size_tmp; ++j) {
			res[j] = ElemCopy(ListGetHeadValue(i));
			i = ListGetTail(i);
		}
	}
	else
	{
		while (size_tmp > 0)
		{
			res[size_tmp - 1] = ElemCopy(ListGetHeadValue(i));
			i = ListGetTail(i);
			--size_tmp;
		}
	}
	
	return res;
}
