#include <stdlib.h>

extern int KthLeast(const int* v, size_t n, int k);

int main(void) {
	
	int v[] = { 3, 66, 2, 14, 76, 7 ,11, 5 };
	int res = KthLeast(v, 8, 4);

	return 0;
}