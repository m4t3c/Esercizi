#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

static bool Power4Rec(int n, int* x) {
	if (n == 1) {
		return true;
	}
	if (n % 4 != 0 || n == 0) {
		return false;
	}

	(*x)++;
	n /= 4;

	return Power4Rec(n, x);
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

	int x = 0;
	if (Power4Rec(n, &x)) {
		printf("4^%d = %d", x, n);
	}
	else
	{
		printf("!p4");
	}
	
	return 0;
}