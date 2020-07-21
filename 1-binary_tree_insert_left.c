#include "binary_trees.h"
/**
 * binary_tree_insert_left - a function that inserts a node as
 * the left-child of another node
 * @parent: pointer to the parent node
 * @value: value to be put in the node
 * Return: the pointer of the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	if (parent == NULL)
		return (NULL);

	tmp = binary_tree_node(parent, value);
	if (tmp == NULL)
		return (NULL);

	if (parent->left)
	{
		parent->left->parent = tmp;
		tmp->left = parent->left;
	}
	parent->left = tmp;
	tmp->parent = parent;
	return (tmp);
}
