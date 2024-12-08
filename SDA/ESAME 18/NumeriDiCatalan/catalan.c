#include <stdlib.h>
#include <stdio.h>

static long long CatalanRec(int n) {

	if (n == 0) {
		return 1;
	}

	long long res = 0;
	for (int i = 0; i < n; ++i) {
		res += CatalanRec(i) * CatalanRec(n - 1 - i);
	}

	return res;
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

	long long res = CatalanRec(n);
	printf("%lld", res);

	return 0;
}