#include "stack.h"

int main(void) {

	unsigned v1[] = { 1, 1, 1, 2, 3 };
	unsigned v2[] = { 2, 3, 4 };
	unsigned v3[] = { 1, 4, 5, 2 };

	Stack s[] = { {.elements = v1, .m = 5}, {.elements = v2, .m = 3 }, {.elements = v3, .m = 4} };
	unsigned r = MaxSumNStack(s, 3);

	return 0;
}