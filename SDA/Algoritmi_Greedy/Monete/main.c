#include <stdlib.h>

extern int* Monete(int* tagli, size_t tagli_size, int budget);

int main(void) {

	int tagli[] = { 50, 20, 10, 5, 2, 1 };
	size_t tagli_size = 6;
	int budget = 126;
	int* res = Monete(tagli, tagli_size, budget);

	return 0;
}