#include "tree.h"
#include <stdlib.h>

void TreePreOrderDelete(Node* t) {
	if (TreeIsEmpty(t)) {
		return;
	}

	Node* l = TreeLeft(t);
	Node* r = TreeRight(t);

	printf("%d ", *TreeGetRootValue(t));
	free(t);

	TreePreOrderDelete(l);
	TreePreOrderDelete(r);

}