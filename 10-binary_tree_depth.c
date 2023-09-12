#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @tree: the root node of the tree
 * Return: measure the depth of the tree or 0 if fail
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;
	binary_tree_t *ptr = (binary_tree_t *) tree;

	if (tree == NULL)
		return (counter);

	while (ptr->parent != NULL)
	{
		counter++;
		ptr = ptr->parent;
	}

	return (counter);
}
