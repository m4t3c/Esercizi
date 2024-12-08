#include "tree.h"

static Node* TreeInsertBinOrd(const ElemType* e, Node* bst) {
	if (TreeIsEmpty(bst)) {
		return TreeCreateRoot(e, NULL, NULL);
	}

	Node* tmp = bst;
	while (true) {
		if (ElemCompare(TreeGetRootValue(tmp), e) > 0) {
			if (TreeIsEmpty(TreeLeft(tmp))) {
				tmp->left = TreeCreateRoot(e, NULL, NULL);
				break;
			}
			else
			{
				tmp = TreeLeft(tmp);
			}
		}
		else
		{
			if (TreeIsEmpty(TreeRight(tmp))) {
				tmp->right = TreeCreateRoot(e, NULL, NULL);
				break;
			}
			else
			{
				tmp = TreeRight(tmp);
			}
		}
	}

	return bst;
}

static void Tree2BstRec(const Node* t, Node** bst) {
	if (TreeIsEmpty(t)) {
		return;
	}
	Tree2BstRec(TreeLeft(t), bst);
	(*bst) = TreeInsertBinOrd(TreeGetRootValue(t), *bst);
	Tree2BstRec(TreeRight(t), bst);

}

Node* Tree2Bst(const Node* t) {
	
	Node* bst = TreeCreateEmpty();
	Tree2BstRec(t, &bst);

	return bst;
}