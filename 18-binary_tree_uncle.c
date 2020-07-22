#include "binary_trees.h"
/**
 * binary_tree_uncle - a function that finds the uncle of a node
 * @node: is a pointer to the node to find the uncle
 * Return: a pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent->parent || !node->parent)
		return (NULL);


	if (node->parent->parent->left == NULL ||
	node->parent->parent->right == NULL)
		return (NULL);

	if (node->n < node->parent->parent->n ||
	node->parent->parent->left->left == node
	|| node->parent->parent->left->right == node)
		node = node->parent->parent->right;
	else if (node->n > node->parent->parent->n)
		node = node->parent->parent->left;

	return (node);
}
