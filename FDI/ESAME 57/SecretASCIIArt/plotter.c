#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

void plotter(const char* program) {

	size_t len = strlen(program);

	for (size_t i = 0; i < len; ++i) {

		if (program[i] > 0)
		{
			printf("%c", program[i]);
		}
		else if (program[i] == 0) {
			return;
		}
		else {
			++i;
			for (char j = 0; j < abs(program[i - 1]); ++j) {
				printf("%c", program[i]);
			}
		}
	}

}