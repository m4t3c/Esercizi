#include "tree.h"
#include <limits.h>

static size_t FindMin(const ElemType* v, size_t v_size, int* m) {

	size_t res = 0;

	for (size_t i = 0; i < v_size; ++i) {
		if (v[i] < *m) {
			*m = v[i];
			res = i;
		}
	}

	return res;
}

Node* CreateMinBinTree(const ElemType* v, size_t v_size) {

	if (v == NULL || v_size == 0) {
		return TreeCreateEmpty();
	}

	int m = INT_MAX;
	size_t index = FindMin(v, v_size, &m);
	Node* left = CreateMinBinTree(v, index);
	Node* right = CreateMinBinTree(v + index + 1, v_size - index - 1);

	return TreeCreateRoot(&m, left, right);
}