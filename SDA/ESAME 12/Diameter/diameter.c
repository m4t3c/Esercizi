#include "tree.h"

#define MAX(a, b) (((a) > (b)) ? (a) : (b))

static void TreeHightRec(const Node* t, int i, int* p) {
	if (TreeIsEmpty(t)) {
		return;
	}

	if (TreeIsLeaf(t)) {
		if (i > *p) {
			*p = i;
		}
		return;
	}

	TreeHightRec(TreeLeft(t), i + 1, p);
	TreeHightRec(TreeRight(t), i + 1, p);
}

static int TreeHight(const Node* t) {

	int p = -1; // profondita migliore a 0
	TreeHightRec(t, 0, &p);
	return p;
}

int Diameter(const Node* t) {

	if (TreeIsEmpty(t)) {
		return 0;
	}

	int dl = Diameter(TreeLeft(t));
	int dr = Diameter(TreeRight(t));

	int hl = TreeHight(TreeLeft(t)) + 1;
	int hr = TreeHight(TreeRight(t)) + 1;

	return MAX(MAX(dl, dr), (hl + hr + 1));
}