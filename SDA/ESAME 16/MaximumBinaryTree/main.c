#include "tree.h"

extern Node* CreateMaxBinTree(const ElemType* v, size_t v_size);

int main(void) {

	ElemType arr[] = { 3, 2, 1, 6, 0, 5 };
	Node* res = CreateMaxBinTree(arr, 6);

	TreeWriteStdoutInOrder(res);

	return 0;
}