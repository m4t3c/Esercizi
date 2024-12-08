#include "tree.h"

extern Node *Tree2Bst(const Node *t);

int main(void) {
	
	ElemType arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	Node* t = TreeCreateRoot(arr + 6,
		TreeCreateRoot(arr + 2,
			TreeCreateRoot(arr + 3, NULL, NULL),
			TreeCreateRoot(arr + 8, NULL,
				TreeCreateRoot(arr + 5, NULL, NULL))),
			TreeCreateRoot(arr + 9, NULL,
				TreeCreateRoot(arr + 3, NULL, NULL)));

	TreeWriteStdoutInOrder(t);
	Node* res = Tree2Bst(t);
	TreeWriteStdoutInOrder(res);

	return 0;
}