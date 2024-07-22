#include "tree.h"

const ElemType* BstTreeMin(const Node* n) {
	if (TreeIsEmpty(n)) {
		return NULL;
	}

	while (true)
	{
		if (TreeIsLeaf(n) || n->left == NULL) {
			return TreeGetRootValue(n);
		}
		else
		{
			n = TreeLeft(n);
		}
	}

}

static void TreeMinRec(const Node* n, const ElemType** min, int lvl, int* lvl_max) {
	if (TreeIsEmpty(n)) {
		return;
	}

	if (ElemCompare(TreeGetRootValue(n), *min) < 0 || (ElemCompare(TreeGetRootValue(n), *min) == 0 && lvl > *lvl_max)) {
		*min = TreeGetRootValue(n);
		*lvl_max = lvl;
	}

	TreeMinRec(TreeRight(n), min, lvl + 1, lvl_max);
	TreeMinRec(TreeLeft(n), min, lvl + 1, lvl_max);
}

const ElemType* TreeMin(const Node* n) {
	if (TreeIsEmpty(n)) {
		return NULL;
	}

	const ElemType* min = TreeGetRootValue(n);
	int lvl_max = 0;
	TreeMinRec(n, &min, 0, &lvl_max);

	return min;
}