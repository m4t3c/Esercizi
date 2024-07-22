#include <stdlib.h>
#include <stdio.h>

static int NumeriLeonardoRec(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}

	return NumeriLeonardoRec(n - 1) + NumeriLeonardoRec(n - 2) + 1;
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

	for (int i = 0; i != n; i++)
	{
		int res = NumeriLeonardoRec(i);
		printf("%d, ", res);
	}

	int res = NumeriLeonardoRec(n);
	printf("%d, ", res);

	return 0;
}