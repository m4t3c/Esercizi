#include "minheap.h"

size_t ConnectRopes(Heap* ropes) {

	if (HeapIsEmpty(ropes)) {
		return 0;
	}
	size_t res = 0;
	while (ropes->size > 1)
	{
		int rope1 = ropes->data[0];
		ropes->data[0] = ropes->data[ropes->size - 1];
		ropes->size--;

		HeapMinMoveDown(ropes, 0);

		int rope2 = ropes->data[0];
		int sum = rope1 + rope2;
		res += sum;
		ropes->data[0] = sum;
		HeapMinMoveDown(ropes, 0);
	}

	return res;
}