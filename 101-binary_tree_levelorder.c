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
 *
 * @tree: the root node of the tree
 *
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
 * binary_level - function on a specific level of a binary tree
 *
 * @tree: the root node of the tree
 * @level: level to execute function
 * @func: function to execute
 */
void binary_level(const binary_tree_t *tree, size_t level, void (*func)(int))
{
	if (tree == NULL)
		return;

	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		binary_level(tree->left, level - 1, func);
		binary_level(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - traverses a binary tree using level-order traversal
 *
 * @tree: the root node of the tree
 * @func: function to execute
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, i;

	if (tree == NULL || func == NULL)
		return;

	height = binary_tree_height(tree);

	for (i = 0; i <= height; i++)
		binary_level(tree, i, func);


}
