#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: node to be checked
 * Return: 1 if left. 0 if not leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
	return (1);

	else
	return (0);
}
