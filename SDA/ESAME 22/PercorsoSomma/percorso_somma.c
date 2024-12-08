#include "tree.h"

static void PercorsoSommaRec(Node* t, const ElemType* target, bool* res, ElemType sum) {
	if (ElemCompare(&sum, target) == 0 && TreeIsEmpty(t)) {
		*res = true;
		return;
	}

	if (*res == true || TreeIsEmpty(t)) {
		return;
	}

	sum += t->value;

	PercorsoSommaRec(TreeLeft(t), target, res, sum);
	PercorsoSommaRec(TreeRight(t), target, res, sum);
}

bool PercorsoSomma(Node* t, const ElemType* target) {

	if (TreeIsEmpty(t)) {
		return false;
	}

	bool res = false;

	PercorsoSommaRec(t, target, &res, 0);

	return res;
}