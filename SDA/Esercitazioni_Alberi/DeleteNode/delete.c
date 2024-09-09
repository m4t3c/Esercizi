#include "tree.h"
#include <stdlib.h>

static Node* FindMin(Node* n) {
	while (!TreeIsEmpty(TreeLeft(n)) && ElemCompare(TreeGetRootValue(n), TreeGetRootValue(TreeLeft(n))) > 0) {
		n = n->left;
	}

	return n;
}

Node* DeleteBstNode(Node* n, const ElemType* key) {

	if (TreeIsEmpty(n)) {
		return NULL;
	}
	int cmp = ElemCompare(key, TreeGetRootValue(n));

	if (cmp < 0) {
		n->left = DeleteBstNode(n->left, key);
	}
	else if (cmp > 0) {
		n->right = DeleteBstNode(n->right, key);
	}
	else
	{
		if (n->left == NULL) {
			Node* tmp = n->right;
			ElemDelete(&n->value);
			free(n);
			return tmp;
		}
		else if (n->right == NULL) {
			Node* tmp = n->left;
			ElemDelete(&n->value);
			free(n);
			return tmp;
		}
		Node* tmp = FindMin(n->left);
		ElemDelete(&n->value);
		n->value = ElemCopy(TreeGetRootValue(tmp));
		n->left = DeleteBstNode(n->left, &tmp->value);
	}
	
	return n;
}