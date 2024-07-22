#include <stdlib.h>

extern void CocktailSort(int* v, size_t v_size);

int main(void) {

	int v[] = { 55, 22, 1, 3, 53, 12, 5 };
	CocktailSort(v, 7);

	return 0;
}