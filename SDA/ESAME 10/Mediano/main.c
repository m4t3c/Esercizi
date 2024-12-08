#include "tree.h"

extern double Mediano(const Node* t);

int main(void) {

	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8 };
	const Node* t = TreeCreateRoot(arr + 7,
		TreeCreateRoot(arr + 4,
			TreeCreateRoot(arr + 2,
				TreeCreateRoot(arr + 1, NULL, NULL),
				NULL),
			TreeCreateRoot(arr + 5, NULL, NULL)),
		TreeCreateRoot(arr + 8, NULL, NULL));

	double res = Mediano(t);

	return 0;
}