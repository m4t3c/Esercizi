#include "tree.h"

extern Node* DeleteBstNode(Node* n, const ElemType* key);

int main(void) {
	ElemType arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	Node* t = TreeCreateRoot(arr + 4,
		TreeCreateRoot(arr + 3,
			TreeCreateRoot(arr + 1,
				TreeCreateRoot(arr + 1, NULL, NULL),
				TreeCreateRoot(arr + 2, NULL, NULL)),
			NULL),
		TreeCreateRoot(arr + 7,
			TreeCreateRoot(arr + 5, NULL, NULL),
			TreeCreateRoot(arr + 8, NULL, NULL)));

	TreeWriteStdoutPreOrder(t);
	Node* res = DeleteBstNode(t, arr + 1);
	TreeWriteStdoutPreOrder(t);
	TreeDelete(t);

	return 0;
}