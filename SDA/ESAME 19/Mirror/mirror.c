#include "tree.h"

static void IsMirror(Node* l, Node* r, bool* res) {

	if (TreeIsEmpty(l) && TreeIsEmpty(r)) {
		return;
	}

	if ((ElemCompare(TreeGetRootValue(l), TreeGetRootValue(r)) != 0) || (!TreeIsEmpty(l) && TreeIsEmpty(r)) || (TreeIsEmpty(l) && !TreeIsEmpty(r))) {
		*res = false;
		return;
	}

	if ((!TreeIsEmpty(TreeLeft(l)) && !TreeIsEmpty(TreeRight(r))) || (TreeIsEmpty(TreeLeft(l)) && TreeIsEmpty(TreeRight(r)))) {
		IsMirror(TreeLeft(l), TreeRight(r), res);
	}
	else
	{
		*res = false;
		return;
	}

	if ((!TreeIsEmpty(TreeRight(l)) && !TreeIsEmpty(TreeLeft(r))) || (TreeIsEmpty(TreeRight(l)) && TreeIsEmpty(TreeLeft(r)))) {
		IsMirror(TreeRight(l), TreeLeft(r), res);
	}
	else
	{
		*res = false;
		return;
	}
}

bool TreeIsMirror(Node* t) {

	if (TreeIsEmpty(t) || TreeIsLeaf(t)) {
		return true;
	}

	bool res = true;

	IsMirror(t->left, t->right, &res);

	return res;
}