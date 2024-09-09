#include <stdlib.h>

extern void CocktailSort(int* v, size_t v_size);

int main(void) {

	int v[] = { 34, 22, 1, 67, 3, 967, 32, 11, 4, 6 };
	CocktailSort(v, 10);

	return 0;
}