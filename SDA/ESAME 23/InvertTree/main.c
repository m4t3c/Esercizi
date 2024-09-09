#include "tree.h"

extern Node* Invert(Node* t);

int main(void) {

	ElemType arr[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
	Node* t = TreeCreateRoot(arr + 2,
		TreeCreateRoot(arr + 1,
			TreeCreateRoot(arr + 7, NULL, NULL),
			TreeCreateRoot(arr + 4, NULL, NULL)),
		TreeCreateRoot(arr + 3,
			TreeCreateRoot(arr + 2, NULL, NULL),
			TreeCreateRoot(arr + 4, NULL, NULL)));

	TreeWriteStdoutInOrder(t);
	Node* res = Invert(t);
	TreeWriteStdoutInOrder(res);

	return 0;
}