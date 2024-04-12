#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

extern void BabboNatale(const int* pacchi, size_t pacchi_size, int p);

int main(void) {
	int pacchi[5] = {10, 11, 3, 1, 1};
	size_t pacchi_size = 5;
	int p = 20;
	BabboNatale(pacchi, pacchi_size, p);

	return 0;
}