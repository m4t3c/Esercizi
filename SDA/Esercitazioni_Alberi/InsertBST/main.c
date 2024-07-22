#include "tree.h"

extern Node* BstInsert(const ElemType* e, Node* n);
extern Node* BstInsertRec(const ElemType* e, Node* n);

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
	Node* res1 = BstInsert(arr + 7, t1);
	Node* res2 = BstInsertRec(arr + 7, t1);
	TreeWriteStdoutPreOrder(res1);
	TreeWriteStdoutPreOrder(res2);
	TreeDelete(t1);
	TreeDelete(res1);
	TreeDelete(res2);

	return 0;
}