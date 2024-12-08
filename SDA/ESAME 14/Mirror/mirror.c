#include "tree.h"

static void IsMirror(Node* l, Node* r, bool* res) {

	if (TreeIsEmpty(l) && TreeIsEmpty(r)) {
		return;
	}

	if ((TreeIsEmpty(l) && !TreeIsEmpty(r)) || (!TreeIsEmpty(l) && TreeIsEmpty(r))) {
		*res = false;
		return;
	}

	if (ElemCompare(TreeGetRootValue(l), TreeGetRootValue(r)) != 0) {
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

	if (TreeIsLeaf(t) || TreeIsEmpty(t)) {
		return true;
	}

	bool res = true;

	IsMirror(TreeLeft(t), TreeRight(t), &res);

	return res;
}