#include "tree.h"

Node* Vector2Bst(const ElemType* v, size_t v_size) {

	Node* t = TreeCreateEmpty();

	if (v_size == 0) {
		return t;
	}

	t = TreeCreateRoot(&v[0], NULL, NULL);

	for (size_t i = 0; i < v_size; ++i) {

		Node* tmp = t;

		while (true)
		{
			if (ElemCompare(TreeGetRootValue(tmp), &v[i]) > 0) {
				if (TreeIsEmpty(TreeLeft(tmp))) {
					tmp->left = TreeCreateRoot(&v[i], NULL, NULL);
					break;
				}
				else
				{
					tmp = TreeLeft(tmp);
				}
			}
			else if (ElemCompare(TreeGetRootValue(tmp), &v[i]) < 0)
			{
				if (TreeIsEmpty(TreeRight(tmp))) {
					tmp->right = TreeCreateRoot(&v[i], NULL, NULL);
					break;
				}
				else
				{
					tmp = TreeRight(tmp);
				}
			}
			else
			{
				break;
			}
		}
	}

	return t;
}