#include "tree.h"

static Node* TreeCopy(const Node* t) {
	if (TreeIsEmpty(t)) {
		return NULL;
	}
	Node* n = TreeCreateRoot(TreeGetRootValue(t), NULL, NULL);
	n->left = TreeCopy(TreeLeft(t));
	n->right = TreeCopy(TreeRight(t));
	return n;
}

Node* MergeTree(const Node* t1, const Node* t2) {

	if (TreeIsEmpty(t1) && TreeIsEmpty(t2)) {
		return TreeCreateEmpty();
	}

	else if (TreeIsEmpty(t1)) {
		return TreeCopy(t2);
	}

	else if (TreeIsEmpty(t2)) {
		return TreeCopy(t1);
	}

	ElemType sum = 0;
	sum += t1->value;
	sum += t2->value;

	return TreeCreateRoot(&sum, MergeTree(TreeLeft(t1), TreeLeft(t2)), MergeTree(TreeRight(t1), TreeRight(t2)));
}
