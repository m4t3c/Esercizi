#include "stack.h"

int main(void) {

	Stack stacks[] = {
		{(unsigned[]) { 1, 1, 1, 2, 3 }, 5},
		{(unsigned[]) { 2, 3, 4 }, 3},
		{(unsigned[]) { 1, 4, 5, 2 }, 4}
	};

	unsigned res = MaxSumNStack(stacks, 3);

	return 0;
}