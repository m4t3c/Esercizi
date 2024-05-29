#include "list.h"

extern Item* Delete(Item* i, const char* name);

int main(void) {
	ElemType arr[] = {
		{.name = "Giacomo", .street = "Aldo Moro", .number = 2, .city = "Modena", .province = "MO", .postal_code = "43034"},
		{.name = "Pasquale", .street = "Tommaso Campanella", .number = 9, .city = "Napoli", .province = "NA", .postal_code = "80043"},
		{.name = "Massimo", .street = "Rosa Luxemburg", .number = 12, .city = "Rubiera", .province = "RE", .postal_code = "42048" }
	};
	size_t size = sizeof(arr) / sizeof(ElemType);

	Item* i1 = ListCreateEmpty();
	for (size_t i = 0; i < size; ++i) {
		i1 = ListInsertBack(i1, &arr[i]);
	}

	Item* res = Delete(i1, "Pasquale");

	return 0;
}