#include <stdlib.h>

extern void CocktailSort(int* v, size_t v_size);

int main(void) {

	int v[] = { 34, 7, 344, 2, 1, 89, 32, 25, 8, 0 };

	CocktailSort(v, 10);
	
	return 0;
}