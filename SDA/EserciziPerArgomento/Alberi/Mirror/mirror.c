#include "tree.h"
#include <stdbool.h>

bool TreeIsMirrorRec(Node* t1, Node* t2) {
	if (TreeIsEmpty(t1) && TreeIsEmpty(t2)) {
		return true;
	}

	if (TreeIsEmpty(t2) || TreeIsEmpty(t2)) {
		return false;
	}

	return (ElemCompare(TreeGetRootValue(t1), TreeGetRootValue(t2)) == 0 && 
		TreeIsMirrorRec(TreeLeft(t1), TreeRight(t2)) && 
		TreeIsMirrorRec(TreeRight(t1), TreeLeft(t2)));
}

bool TreeIsMirror(Node* t) {

	return TreeIsMirrorRec(TreeLeft(t), TreeRight(t));
}