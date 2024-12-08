#include <stdlib.h>

extern int* SolarCut(int A, size_t* sol_size);

int main(void) {

	size_t sol_size = 0;
	int* res = SolarCut(12, &sol_size);

	return 0;
}