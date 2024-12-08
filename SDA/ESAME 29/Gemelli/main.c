#include "tree.h"

extern bool TreesAreTwins(const Node* t1, const Node* t2);

int main(void) {

	ElemType arr[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
	Node* t1 = TreeCreateRoot(arr + 3,
		TreeCreateRoot(arr + 2,
			NULL, TreeCreateRoot(arr + 5, NULL, NULL)),
		TreeCreateRoot(arr + 1, NULL, NULL));
	Node* t2 = TreeCreateRoot(arr + 5,
		TreeCreateRoot(arr + 2,
			TreeCreateRoot(arr + 7, NULL, NULL), NULL),
		TreeCreateRoot(arr + 1, NULL, NULL));

	bool res = TreesAreTwins(t1, t2);

	return 0;
}