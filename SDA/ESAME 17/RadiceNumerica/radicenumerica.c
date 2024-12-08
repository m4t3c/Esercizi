#include <stdlib.h>
#include <stdio.h>

static void RadiceNumericaRec(int n, int* res) {

	if (n == 0) {
		return;
	}

	*res += n % 10;

	RadiceNumericaRec(n / 10, res);
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
	
	int res;

	do {
		res = 0;
		RadiceNumericaRec(n, &res);
		n = res;
	} while (res > 9);
	
	printf("%d", res);

	return 0;
}