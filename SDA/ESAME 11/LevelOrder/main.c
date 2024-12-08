#include "tree.h"

extern void LevelOrder(const Node* t);

int main(void) {

	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
	Node* t = TreeCreateEmpty();
	t = TreeCreateRoot(arr + 7,
		TreeCreateRoot(arr + 4,
			TreeCreateRoot(arr + 2,
				TreeCreateRoot(arr + 1, NULL, NULL),
				NULL),
			TreeCreateRoot(arr + 5, NULL, NULL)),
		TreeCreateRoot(arr + 8, NULL, NULL));

	LevelOrder(t);
	TreeWriteStdoutPreOrder(t);

	return 0;
}