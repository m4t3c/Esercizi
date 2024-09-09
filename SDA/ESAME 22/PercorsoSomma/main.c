#include "tree.h"

extern bool PercorsoSomma(Node* t, const ElemType* target);

int main(void) {

	ElemType arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
	Node* t = TreeCreateRoot(arr + 2,
		TreeCreateRoot(arr + 1,
			TreeCreateRoot(arr + 7, NULL, NULL),
			TreeCreateRoot(arr + 4, NULL, NULL)),
		TreeCreateRoot(arr + 3,
			TreeCreateRoot(arr + 2, NULL, NULL),
			TreeCreateRoot(arr + 4, NULL, NULL)));

	ElemType target = 7;

	bool res = PercorsoSomma(t, &target);

	return 0;

}