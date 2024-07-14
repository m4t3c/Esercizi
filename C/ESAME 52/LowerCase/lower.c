#include <stdio.h>

int main(int argc, char** argv) {

	if (argc != 2) {
		return 1;
	}

	FILE* f = fopen(argv[1], "r");
	if (f == NULL) {
		return 1;
	}

	int c;
	while ((c = fgetc(f)) != EOF) {
		if (c >= 'A' && c <= 'Z') {
			c += 'a' - 'A';
		}
		printf("%c", c);
	}

	return 0;
}