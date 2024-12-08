#include <stdlib.h>
#include <stdbool.h>

static void Swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

static bool CircleSortRec(int* v, int start, int end) {

	if (start == end) {
		return true;
	}

	int b = start;
	int e = end;
	bool test = true;

	while (b < e) {
		if (v[b] > v[e]) {
			Swap(&v[b], &v[e]);
			test = false;
		}

		++b;
		--e;
	}

	int mid = (start + end) / 2;
	if ((start + end) % 2 == 0 && (v[mid] > v[mid + 1])) {
		Swap(&v[mid], &v[mid + 1]);
		test = false;
	}

	return CircleSortRec(v, start, mid) && CircleSortRec(v, mid + 1, end) && test;
}

void CircleSort(int* v, size_t v_size) {
	
	if (v == NULL || v_size == 0) {
		return;
	}

	while (!CircleSortRec(v, 0, (int)v_size - 1));
}