#include "binary_trees.h"
/**
 * binary_tree_depth - a function that measures
 * the depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return: the number of depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent)
		count = 1 + binary_tree_depth(tree->parent);
	return (count);
}
