#include "tree.h"

#include "tree.h"

void TreeHeightRec(const Node* t, int curr_h, int* best_h) {
	if (TreeIsEmpty(t)) {
		return;
	}

	if (TreeIsLeaf(t)) {
		if (curr_h > *best_h) {
			*best_h = curr_h;
			return;
		}
	}

	TreeHeightRec(TreeLeft(t), curr_h + 1, best_h);
	TreeHeightRec(TreeRight(t), curr_h + 1, best_h);
}

int TreeHeight(const Node* t) {
	int res = -1;
	TreeHeightRec(t, 0, &res);
	return res;
}