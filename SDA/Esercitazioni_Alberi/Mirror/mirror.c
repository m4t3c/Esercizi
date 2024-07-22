#include "tree.h"

static bool TreeIsMirrorRec(const Node* l, const Node* r) {
	if (TreeIsEmpty(l) && TreeIsEmpty(r)) {
		return true;
	}

	if ((TreeIsEmpty(l) || TreeIsEmpty(r)) || (ElemCompare(TreeGetRootValue(l), TreeGetRootValue(r)) != 0)) {
		return false;
	}

	return TreeIsMirrorRec(TreeLeft(l), TreeRight(r)) && TreeIsMirrorRec(TreeLeft(r), TreeRight(l));
}

bool TreeIsMirror(const Node* t) {
	
	Node* l = TreeLeft(t);
	Node* r = TreeRight(t);

	return TreeIsMirrorRec(l, r);
}