#include "stacks.h"

int main(void) {

	Stack vec[] = {
		{.m = 5, .elements = (unsigned[]) {1, 1, 1, 2, 3}},
		{.m = 3, .elements = (unsigned[]) {2, 3, 4}},
		{.m = 4, .elements = (unsigned[]) {1, 4, 5, 2}}
	};

	size_t size = sizeof(vec) / sizeof(Stack);

	unsigned value = MaxSumNStack(vec, size);

	return 0;
}