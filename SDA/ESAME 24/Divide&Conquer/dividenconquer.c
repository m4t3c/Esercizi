#include <stdlib.h>
#include <stdio.h>

static int DivideNConquer(int n) {

	if (n == 0) {
		return 0;
	}

	if (n == 1) {
		return 1;
	}

	return DivideNConquer(n / 2) + DivideNConquer(n - n / 2) + n;
}

int main(int argc, char** argv) {

	if (argc != 2) {
		return 1;
	}

	char* endptr;
	int n = strtol(argv[1], &endptr, 10);
	if (n < 0 || *endptr != 0) {
		return 1;
	}
	
	int res = DivideNConquer(n);
	printf("%d", res);

	return 0;
}