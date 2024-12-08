#include "tree.h"

static void PopulatingNextRec(Node* t, Node** prev) {

	if (TreeIsEmpty(t)) {
		return;
	}

	PopulatingNextRec(t->left, prev);
	if (*prev != NULL) {
		(*prev)->next = t;
	}
	(*prev) = t;

	PopulatingNextRec(t->right, prev);
}

void PopulatingNext(Node* t) {
	Node* prev = NULL;
	PopulatingNextRec(t, &prev);
}