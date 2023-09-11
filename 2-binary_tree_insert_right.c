#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert a node at the right branch of tree
 *
 * @parent: parents of the node
 * @value: value inside the node
 * Return: a pointer binary_tree_t or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;


	if (parent == NULL)
		return (NULL);

	newnode = creat_node(newnode, value);

	if (newnode == NULL)
		return (NULL);

	newnode->parent = parent;

	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
		parent->right = newnode;
	}
	else
		parent->right = newnode;

	return (newnode);
}
/**
 * creat_node - creates a node and initialises value.
 * In addition also initialised children to null
 *
 * @newnode: newly created node
 * @value: value of the node
 * Return: binary_tree_t*
 */
binary_tree_t *creat_node(binary_tree_t *newnode, int value)
{
	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
