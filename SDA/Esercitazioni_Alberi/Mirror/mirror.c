#include "tree.h"

static void TreeIsMirrorRec(const Node* l, const Node* r, bool* res) {

	if (TreeIsEmpty(l) && TreeIsEmpty(r)) {
		return;
	}

	if (ElemCompare(TreeGetRootValue(l), TreeGetRootValue(r)) != 0) {
		*res = false;
		return;
	}
	
	if (!TreeIsEmpty(TreeLeft(l)) && !TreeIsEmpty(TreeRight(r)) || (TreeIsEmpty(TreeLeft(l)) && TreeIsEmpty(TreeRight(r)))) {
		TreeIsMirrorRec(TreeLeft(l), TreeRight(r), res);
	}
	else
	{
		*res = false;
		return;
	}
	
	if (!TreeIsEmpty(TreeRight(l)) && !TreeIsEmpty(TreeLeft(r)) || (TreeIsEmpty(TreeRight(l)) && TreeIsEmpty(TreeLeft(r)))) {
		TreeIsMirrorRec(TreeRight(l), TreeLeft(r), res);
	}
	else
	{
		*res = false;
		return;
	}

}

bool TreeIsMirror(const Node* t) {

	if (TreeIsEmpty(t) || TreeIsLeaf(t)) {
		return true;
	}

	bool res = true;

	TreeIsMirrorRec(TreeLeft(t), TreeRight(t), &res);

	return res;
}