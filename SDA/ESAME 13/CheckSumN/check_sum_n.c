#include "tree.h"

int CountNodes(const Node* t) {

	if (TreeIsEmpty(t)) {
		return 0;
	}

	return 1 + CountNodes(t->left) + CountNodes(t->right);
}

bool CheckSumN(const Node* t, int n) {
	
	int nodes = CountNodes(t);
	if (n < 2) {
		return false;
	}



}