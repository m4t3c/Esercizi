#include <stdio.h>

int main(int argc, char** argv) {
	if (argc != 2) {
		return 1;
	}

	FILE* f = fopen(argv[1], "r");
	if (f == NULL) {
		return 1;
	}

	char line[256];
	int line_count = 0;

	while ((fgets(line, sizeof(line), f)) && line_count < 10)
	{
		fputs(line, stdout);
		++line_count;
	}
	
	if (line_count < 10) {
		fputc('\n', stdout);
	}

	fclose(f);

	return 0;
}