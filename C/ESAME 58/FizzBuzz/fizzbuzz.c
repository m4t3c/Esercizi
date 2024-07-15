#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv) {

	if (argc != 2) {
		return 1;
	}

	char *endptr;
	int n = strtol(argv[1], &endptr, 10);
	
	if (*endptr != 0 || n <= 0) {
		return 1;
	}

	for (int i = 1; i <= n; ++i) {

		if (i % 3 == 0 && i % 5 != 0) {
			printf("Fizz\n");
		}
		else if (i % 3 != 0 && i % 5 == 0)
		{
			printf("Buzz\n");
		}
		else if (i % 3 == 0 && i % 5 == 0) {
			printf("Fizzbuzz\n");
		}
		else {
			printf("%d\n", i);
		}
	}

	return 0;
}