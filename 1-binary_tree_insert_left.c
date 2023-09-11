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
	binary_tree_t *newnode;

	binary_tree_node(newnode, value);

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);

	newnode->parent = parent;
	newnode->n = value;

	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
		parent->left = newnode;
	}
	else
		parent->left = newnode;

	return (newnode);
}
