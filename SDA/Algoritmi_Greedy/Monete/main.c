#include <stdlib.h>

extern int* Monete(const int* tagli, size_t tagli_size, int budget);

int main(void) {

	const int tagli[] = { 50, 20, 10, 5, 2, 1 };
	int* res = Monete(tagli, 6, 126);

	return 0;
}