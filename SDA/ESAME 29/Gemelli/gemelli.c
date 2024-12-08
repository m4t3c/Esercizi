#include "tree.h"

static void TreesAreTwinsRec(const Node* t1, const Node* t2, bool* aretwins) {
	if (TreeIsEmpty(t1) && TreeIsEmpty(t2)) {
		return;
	}

	if ((TreeIsEmpty(t1) && !TreeIsEmpty(t2)) || (!TreeIsEmpty(t1) && TreeIsEmpty(t2))) {
		*aretwins = false;
		return;
	}

	TreesAreTwinsRec(TreeLeft(t1), TreeLeft(t2), aretwins);
	TreesAreTwinsRec(TreeRight(t1), TreeRight(t2), aretwins);

}

bool TreesAreTwins(const Node* t1, const Node* t2) {

	bool aretwisn = true;
	
	TreesAreTwinsRec(t1, t2, &aretwisn);

	return aretwisn;
}