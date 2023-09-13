#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: node to be checked if there's an uncle
 * Return: uncle of node OR NULL on failure
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == NULL || node->parent->parent->right == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);

	return (node->parent->parent->left);
}
