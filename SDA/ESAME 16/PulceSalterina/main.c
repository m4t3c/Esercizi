#include <stdlib.h>

extern char* GuidaLaPulce(const int* f, size_t f_size, int a, int b, int n, int h, size_t* ret_size);

int main(void) {

	int f[] = { 12, 4, 7, 1, 15 };
	size_t ret_size = 0;

	char* res = GuidaLaPulce(f, 5, 3, 15, 2, 9, &ret_size);
	return 0;
}