#include "tree.h"

extern Node* MergeTree(const Node* t1, const Node* t2);

int main(void) {

	ElemType arr[] = { -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	Node* t1 = TreeCreateRoot(arr + 1,
		TreeCreateRoot(arr + 8,
			TreeCreateRoot(arr + 11, NULL, NULL),
			TreeCreateRoot(arr + 5, NULL,
				TreeCreateRoot(arr + 4, NULL, NULL))),
		TreeCreateRoot(arr + 4, NULL,
			TreeCreateRoot(arr + 4, NULL, NULL)));

	Node* t2 = TreeCreateRoot(arr,
		TreeCreateRoot(arr + 13, NULL, NULL),
		TreeCreateRoot(arr + 4,
			TreeCreateRoot(arr + 12, NULL, NULL),
			TreeCreateRoot(arr + 2, NULL, NULL)));

	Node* res = MergeTree(t1, t2);
	TreeWriteStdoutPreOrder(res);
	return 0;
}