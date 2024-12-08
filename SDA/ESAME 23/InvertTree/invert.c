#include "tree.h"

static void InvertRec(Node* l, Node* r) {
	ElemSwap(&l->value, &r->value);
	if (TreeIsLeaf(l) && TreeIsLeaf(r)) {
		return;
	}

	if (!TreeIsEmpty(TreeLeft(l)) && !TreeIsEmpty(TreeRight(r))) {
		InvertRec(TreeLeft(l), TreeRight(r));
	}

	if (!TreeIsEmpty(TreeLeft(r)) && !TreeIsEmpty(TreeRight(l))) {
		InvertRec(TreeRight(l), TreeLeft(r));
	}
}

Node* Invert(Node* t) {

	if (TreeIsEmpty(t)) {
		return t;
	}

	Node* res = t;
	InvertRec(TreeLeft(t), TreeRight(t));

	return res;
}