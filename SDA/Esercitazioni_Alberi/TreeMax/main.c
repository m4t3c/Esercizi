#include "tree.h"

extern const ElemType* BstTreeMax(const Node* n);
extern const ElemType* TreeMax(const Node* n);

int main(void) {

	ElemType arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	Node* t1 = TreeCreateRoot(arr + 0,
		TreeCreateRoot(arr + 1,
			TreeCreateRoot(arr + 4, NULL, NULL),
			TreeCreateRoot(arr + 2, NULL, NULL)),
		TreeCreateRoot(arr + 1,
			TreeCreateRoot(arr + 2, NULL, NULL),
			TreeCreateRoot(arr + 4, NULL, NULL)));

	const ElemType* res = BstTreeMax(t1);
	const ElemType* res1 = TreeMax(t1);

	TreeDelete(t1);

	return 0;
}