#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <math.h>

static bool IsHappyRec(int n) {

	if (n == 1) {
		return true;
	}
	if (n == 4 || n == 0) {
		return false;
	}

	int sum = 0;
	while (n != 0) {
		sum += (n % 10) * (n % 10);
		n /= 10;
	}

	return IsHappyRec(sum);
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

	bool happyornot = IsHappyRec(n);

	if (happyornot) {
		printf("Felice");
	}
	else
	{
		printf("Infelice");
	}

	return 0;
}