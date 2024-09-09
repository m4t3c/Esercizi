#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>

static void PrintBin(int n) {

	if (n > 1) {
		PrintBin(n / 2);
	}

	printf("%d", (n % 2));
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

	PrintBin(n);

	return 0;
}