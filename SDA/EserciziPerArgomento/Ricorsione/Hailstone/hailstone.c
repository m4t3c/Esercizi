#include <stdio.h>
#include <stdlib.h>

size_t HailstoneRec(int n) {
	printf("%d", n);

	if (n == 1) {
		return 1;
	}

	printf(", ");

	n = n % 2 ? 3 * n + 1 : n / 2;

	return 1 + HailstoneRec(n);
}

size_t Hailstone(int n) {

	if (n <= 0) {
		return 0;
	}

	return HailstoneRec(n);
}