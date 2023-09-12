#include "binary_trees.h"

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;


	if (tree == NULL)
		return (0);


	left = binary_tree_balance(tree->left) + 1;
	right = binary_tree_balance(tree->right) + 1;
	printf("%d", left);
	return (left - right);
}
