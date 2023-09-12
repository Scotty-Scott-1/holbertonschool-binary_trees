#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if the node is a leaf or not
 *
 * @node: node to check
 * Return: 1 if success
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL && node != NULL)
		return (1);

	return (0);
}

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * Description: A NULL pointer is not a leaf
 *
 * @tree: root of the tree
 *
 * Return: Number of the leaves or 0 if fail
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);

	return (left + right);
}
