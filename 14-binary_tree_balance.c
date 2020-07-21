#include "binary_trees.h"
/**
 * binary_tree_height_2 - a function that measures
 * the height of a binary tree
 * @tree:  is a pointer to the root node of the
 * tree to measure the height.
 * Return: the number of height
 */
size_t binary_tree_height_2(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);
	left = 1 + binary_tree_height_2(tree->left);
	right = 1 + binary_tree_height_2(tree->right);
	if (left > right)
		return (left);
	return (right);
}

/**
 * binary_tree_balance - a function that measures
 * the balance factor of a binary tree
 * @tree: is a pointer to the root node of the
 * tree to measure the balance factor
 * Return: return the number of factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	left = binary_tree_height_2(tree->left) + 1;
	right = binary_tree_height_2(tree->right) + 1;
	return (left - right);
}
