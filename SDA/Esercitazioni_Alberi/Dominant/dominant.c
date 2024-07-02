#include "tree.h"

int CountDominantRec(const Node* t) {
	const ElemType *lv = TreeGetRootValue(TreeLeft(t));
	const ElemType *rv = TreeGetRootValue(TreeRight(t));
	if (ElemCompare(TreeGetRootValue(t), *lv + *rv) > 0) {

	}
}

int CountDominant(const Node* t) {

	if (t == NULL) {
		return 0;
	}

	const Node* tmp = t;

	int res = CountDominantRec(tmp);

	return res;
}