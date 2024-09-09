#include <stdlib.h>
#include <stdio.h>

static int TriangularRec(int n) {

	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else if (n == 2) {
		return 3;
	}

	return (3 * TriangularRec(n - 1)) - (3 * TriangularRec(n - 2)) + TriangularRec(n - 3);
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

	int tri = TriangularRec(n);
	printf("%d", tri);

	return 0;
}