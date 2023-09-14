#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: node to be checked
 * Return: 1 if left. 0 if not leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the root node of the tree
 * Return: measure of the height or 0 if fail
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left >= right)
		return (1 + left);

	return (1 + right);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: root the the tree
 * Return: 1 for perfect. 0 for not perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left != right)
		return (0);

	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
}
/**
 * binary_tree_is_complete - checks if a binary tree is complete
 *
 * @tree: the root node of the tree
 * Return: 1 if is complete else 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t l_height, r_height;
	binary_tree_t *left, *right;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);

	left = tree->left;
	right = tree->right;
	l_height = binary_tree_height(left);
	r_height = binary_tree_height(right);

	if (l_height == r_height)
	{
		if (binary_tree_is_perfect(left) && binary_tree_is_complete(right))
			return (1);
	}
	else if (l_height == r_height + 1)
	{
		if (binary_tree_is_complete(left) && binary_tree_is_perfect(right))
			return (1);
	}

		return (0);
}
