#include "tree.h"

extern bool TreeIsMirror(Node* t);

int main(void) {

	ElemType arr[] = { 0, 1, 2, 3, 4 };

	Node* t = TreeCreateRoot(arr,
		TreeCreateRoot(arr + 1,
			TreeCreateRoot(arr + 4, NULL, NULL),
			TreeCreateRoot(arr + 3, NULL, NULL)),
		TreeCreateRoot(arr + 1,
			TreeCreateRoot(arr + 2, NULL, NULL),
			TreeCreateRoot(arr + 4, NULL, NULL)));

	bool res = TreeIsMirror(t);

	return 0;
}