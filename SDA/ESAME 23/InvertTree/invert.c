#include "tree.h"

static void InvertRec(Node* l, Node* r) {
	ElemSwap(&l->value, &r->value);
	if (TreeIsLeaf(l) && TreeIsLeaf(r)) {
		return;
	}
	if (l->left != NULL && r->right != NULL) {
		InvertRec(TreeLeft(l), TreeRight(r));
	}
	if (l->right != NULL && r->left != NULL) {
		InvertRec(TreeRight(l), TreeLeft(r));
	}
}



Node* Invert(Node* t) {

	if (TreeIsEmpty(t)) {
		return TreeCreateEmpty();
	}

	Node* res = t;
	InvertRec(TreeLeft(res), TreeRight(res));

	return res;
}