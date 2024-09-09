#include "tree.h"

extern bool Cugini(const Node* t, int a, int b);

int main(void) {

	ElemType arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
	
	Node* t = TreeCreateRoot(arr + 1,
		TreeCreateRoot(arr + 2,
			TreeCreateRoot(arr + 3, NULL, NULL),
			TreeCreateRoot(arr + 4, NULL, NULL)),
		TreeCreateRoot(arr + 5,
			TreeCreateRoot(arr + 6, NULL,
				TreeCreateRoot(arr + 8, NULL, NULL)),
			NULL));

	bool res = Cugini(t, 3, 6);
	res = Cugini(t, 3, 4);

	return 0;
}