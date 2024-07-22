#include "tree.h"

extern int LevelSum(const Node* t, size_t level);

int main(void) {

	ElemType arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	Node* t1 = TreeCreateRoot(arr + 0,
		TreeCreateRoot(arr + 1,
			TreeCreateRoot(arr + 4, NULL, NULL),
			TreeCreateRoot(arr + 2, NULL, NULL)),
		TreeCreateRoot(arr + 1,
			TreeCreateRoot(arr + 2, NULL, NULL),
			TreeCreateRoot(arr + 4, NULL, NULL)));

	TreeWriteStdoutPreOrder(t1);

	int res = LevelSum(t1, 0);

	TreeDelete(t1);

	return 0;
}