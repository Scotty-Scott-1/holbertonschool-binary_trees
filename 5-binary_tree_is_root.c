#include "binary_trees.h"
/**
 * binary_tree_is_root - check if the node is a root or not
 *
 * @node: node to check
 * Return: 1 if success
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
