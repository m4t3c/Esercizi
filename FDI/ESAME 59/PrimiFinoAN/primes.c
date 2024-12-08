#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool IsPrime(int n) {
	if (n == 2 || n == 3) {
		return true;
	}

	if (n % 2 == 0 || n % 3 == 0) {
		return false;
	}

	for (int i = 5; i * i <= n; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0) {
			return false;
		}

	}

	return true;
}


int main(int argc, char** argv) {
	if (argc != 2) {
		return 1;
	}
 
	char* endptr;
	int n = strtol(argv[1], &endptr, 10);
	if (*endptr != 0 || n <= 0) {
		return 1;
	}

	for (int i = 2; i < n; ++i) {
		if (IsPrime(i)) {
			printf("%d ", i);
		}
	}

	printf("\n");
}