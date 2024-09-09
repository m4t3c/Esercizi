#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

static void IsPrimeRec(int n, int i, bool* check) {
	if (i * i > n) {
		return;
	}

	if (n % i == 0) {
		*check = false;
		return;
	}

	IsPrimeRec(n, i + 1, check);
}

int main(int argc, char** argv) {

	if (argc != 2) {
		return 1;
	}

	char* endptr;
	int n = strtol(argv[1], &endptr, 10);
	if (*endptr != 0 || n < 0) {
		return 1;
	}

	if (n == 1 || n == 0) {
		printf("false");
		return 0;
	}

	bool check = true;

	IsPrimeRec(n, 2, &check);

	if (check) {
		printf("true");
	}
	else
	{
		printf("false");
	}

	return 0;
}