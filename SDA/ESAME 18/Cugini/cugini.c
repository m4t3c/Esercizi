#include "tree.h"

static void FindDepthAndParent(const Node* t, int target, int depth, const Node* parent, int* target_depth, const Node** target_parent) {

	if (TreeIsEmpty(t)) {
		return;
	}

	if (t->value == target) {
		*target_depth = depth;
		*target_parent = parent;
		return;
	}

	FindDepthAndParent(t->left, target, depth + 1, t, target_depth, target_parent);
	FindDepthAndParent(t->right, target, depth + 1, t, target_depth, target_parent);

}

bool Cugini(const Node* t, int a, int b) {

	if (TreeIsEmpty(t)) {
		return false;
	}

	int depth_a = -1;
	int depth_b = -1;

	const Node* parent_a = NULL;
	const Node* parent_b = NULL;

	FindDepthAndParent(t, a, 0, NULL, &depth_a, &parent_a);
	FindDepthAndParent(t, b, 0, NULL, &depth_b, &parent_b);

	return (depth_a == depth_b) && (parent_a != parent_b);
}