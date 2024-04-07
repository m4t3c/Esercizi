#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

bool isprime(int n) {
	if (n == 0 || n == 1) {
		return false;
	}

	for (int i = 2; i  <= (int)sqrt(n); ++i) {
		if ((n % i) == 0) {
			return false;
		}
	}

	return true;
}

int main(int argc, char** argv) {

	if (argc != 2) {
		return 1;
	}
	
	char* endptr = 0;
	int n = strtol(argv[1], &endptr, 10);
	if (n < 0 || *endptr != 0) {
		return 1;
	}

	bool r = isprime(n);
	if (r) {
		fprintf(stdout, "true");
	}
	else
	{
		fprintf(stdout, "false");
	}


	return 0;
}