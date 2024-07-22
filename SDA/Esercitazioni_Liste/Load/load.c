#include "list.h"

Item* ListLoad(const char* filename) {

	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return ListCreateEmpty();
	}

	Item* res = ListCreateEmpty();
	ElemType e;
	while (ElemRead(f, &e) != EOF)
	{
		res = ListInsertHead(&e, res);
	}

	fclose(f);
	return res;
}