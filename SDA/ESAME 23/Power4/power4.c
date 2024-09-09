#include <stdlib.h>
#include <stdio.h>

static void Power4Rec(int n, int x, int prod) {

	if (prod > n) {
		printf("!p4");
		return;
	}

	if (prod == n) {
		printf("4^%d = %d", x, n);
		return;
	}

	if (prod == 1) {
		prod = 4;
		Power4Rec(n, x + 1, prod);
	}
	else
	{
		Power4Rec(n, x + 1, prod * 4);
	}
}

int main(int argc, char** argv) {

	if (argc != 2) {
		return 1;
	}

	char* endptr;
	int n = strtol(argv[1], &endptr, 10);
	if (*endptr != 0) {
		return 1;
	}

	Power4Rec(n, 0, 1);

	return 0;
}