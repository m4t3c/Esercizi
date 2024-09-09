#include "tree.h"
#include <limits.h>

static size_t FindMax(const ElemType* v, size_t v_size, int* m) {

	size_t res = 0;

	for (size_t i = 0; i < v_size; ++i) {

		if (v[i] > *m) {
			*m = v[i];
			res = i;
		}
	}

	return res;
}

Node* CreateMaxBinTree(const ElemType* v, size_t v_size) {
	
	if (v == NULL || v_size == 0) {
		return TreeCreateEmpty();
	}
	int m = INT_MIN;
	size_t index = FindMax(v, v_size, &m);
	Node* left_subtree = CreateMaxBinTree(v, index);
	Node* right_subtree = CreateMaxBinTree(v + index + 1, v_size - index - 1);

	return TreeCreateRoot(&m, left_subtree, right_subtree);
}