#include "tree.h"

static void PercorsoSommaRec(Node* t, const ElemType* target, int sum, bool* res) {

	if (sum == *target && TreeIsLeaf(t)) {
		*res = true;
		return;
	}
	if (TreeIsLeaf(t) || sum > *target) {
		return;
	}

	PercorsoSommaRec(TreeLeft(t), target, sum + t->left->value, res);
	PercorsoSommaRec(TreeRight(t), target, sum + t->right->value, res);

}

bool PercorsoSomma(Node* t, const ElemType* target) {

	if (TreeIsEmpty(t)) {
		return false;
	}

	bool res = false;

	PercorsoSommaRec(t, target, t->value, &res);

	return res;
}