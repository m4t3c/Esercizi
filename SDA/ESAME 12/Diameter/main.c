#include "tree.h"

extern int Diameter(const Node* t);

int main(void) {

	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
	Node* t = TreeCreateRoot(arr + 5,
		TreeCreateRoot(arr + 2,
			TreeCreateRoot(arr + 1,
				TreeCreateRoot(arr, NULL, NULL),
				TreeCreateRoot(arr + 9, NULL, NULL)),
			TreeCreateRoot(arr + 4,
				TreeCreateRoot(arr + 2, NULL, NULL),
				TreeCreateRoot(arr + 9, NULL, NULL))),
		TreeCreateRoot(arr + 7, NULL,
				TreeCreateRoot(arr + 10, NULL,
					TreeCreateRoot(arr + 11,
						TreeCreateRoot(arr + 8, NULL, NULL),
						TreeCreateRoot(arr + 13, NULL, NULL)))));

	int res = Diameter(t);

	return 0;
}