#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a node at the left branch of tree
 *
 * @parent: parents of the node
 * @value: value inside the node
 * Return: a pointer binary_tree_t or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL || parent == NULL)
		return (NULL);

	if (parent->left == NULL)
		parent->left = newnode;
	else
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}

	newnode->n = value;
	newnode->parent = parent;
	parent->left = newnode;

	return (newnode);
}
