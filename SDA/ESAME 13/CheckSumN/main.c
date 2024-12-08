#include "tree.h"

extern bool CheckSumN(const Node *t, int n);

int main(void) {

	ElemType arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
	Node* t = TreeCreateEmpty();
	t = TreeCreateRoot(arr + 7,
		TreeCreateRoot(arr + 6,
			TreeCreateRoot(arr + 2,
				TreeCreateRoot(arr + 1, NULL, NULL),
				NULL),
			TreeCreateRoot(arr + 5, NULL, NULL)),
		TreeCreateRoot(arr + 8, NULL, NULL));

	bool res = CheckSumN(t, 6);
	
	return 0;
}