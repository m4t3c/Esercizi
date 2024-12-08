#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
	if (argc != 2) {
		return 1;
	}
	
	char* endptr = 0;
	int n = strtol(argv[1], &endptr, 10);
	if (n < 0 || *endptr != 0) {
		return 1;
	}

	int sum = 0;
	while ((n / 10) != 0) {
		int tmp = n;
		do {
			sum += tmp % 10;
			tmp /= 10;
		} while (((tmp * 10) / 10) != 0);
		n = sum;
		sum = 0;
	}

	fprintf(stdout, "%d", n);

	return 0;
}