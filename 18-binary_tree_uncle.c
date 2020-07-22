#include "binary_trees.h"
/**
 * binary_tree_uncle - a function that finds the uncle of a node
 * @node: is a pointer to the node to find the uncle
 * Return: a pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent
	|| !node->parent->parent
	|| !node->parent->parent->left
	|| !node->parent->parent->right)
		return (NULL);

	if (node->parent->parent->left->left == node
	|| node->parent->parent->left->right == node)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
