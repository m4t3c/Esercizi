#include "tree.h"

extern int CountDominant(const Node* t);

int main(void) {

	ElemType arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };

	Node* t = TreeCreateRoot(arr + 4,
		TreeCreateRoot(arr + 3,
			TreeCreateRoot(arr + 1,
				TreeCreateRoot(arr + 1, NULL, NULL),
				TreeCreateRoot(arr + 2, NULL, NULL)),
			NULL),
		TreeCreateRoot(arr + 7,
			TreeCreateRoot(arr + 5, NULL, NULL),
			TreeCreateRoot(arr + 8, NULL, NULL)));

	int r = CountDominant(t);
	fprintf(stdout, "%d", r);

	return 0;
}