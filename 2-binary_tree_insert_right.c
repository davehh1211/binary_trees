#include "binary_trees.h"
/**
 * binary_tree_insert_right - a function that inserts a node
 * as the right-child of another node
 * @parent: pointer to the parent node
 * @value: value to be put in the node
 * Return: the pointer of the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	if (parent == NULL)
		return (NULL);

	tmp = binary_tree_node(parent, value);
	if (tmp == NULL)
		return (NULL);

	if (parent->right)
	{
		parent->right->parent = tmp;
		tmp->right = parent->right;
	}
	parent->right = tmp;
	tmp->parent = parent;
	return (tmp);
}
