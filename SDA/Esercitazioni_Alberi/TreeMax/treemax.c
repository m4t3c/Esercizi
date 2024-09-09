#include "tree.h"

const ElemType* BstTreeMax(const Node* n) {
	if (TreeIsEmpty(n)) {
		return NULL;
	}
	
	while (!TreeIsEmpty(TreeRight(n))) {
		n = TreeRight(n);
	}

	return TreeGetRootValue(n);
}

static void TreeMaxRec(const Node* n, const ElemType** max, int lvl, int* lvl_min) {
	if (TreeIsEmpty(n)) {
		return;
	}

	if (ElemCompare(TreeGetRootValue(n), *max) > 0 || 
		((ElemCompare(TreeGetRootValue(n), *max) == 0) && lvl < *lvl_min)) {
		*max = TreeGetRootValue(n);
		*lvl_min = lvl;
	}

	TreeMaxRec(TreeLeft(n), max, lvl + 1, lvl_min);
	TreeMaxRec(TreeRight(n), max, lvl + 1, lvl_min);
}

const ElemType* TreeMax(const Node* n) {
	
	if (TreeIsEmpty(n)) {
		return NULL;
	}
	const ElemType* max = TreeGetRootValue(n);
	int lvl_min = 0;

	TreeMaxRec(n, &max, 0, &lvl_min);

	return max;
}