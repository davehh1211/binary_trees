#include "binary_trees.h"
/**
 * binary_tree_leaves - a function that counts
 * the leaves in a binary tree
 * @tree: is a pointer to the root node of the
 * tree to count the number of leaves
 * Return: the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	unsigned int count = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		count++;
	else
		count = (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	return (count);
}


/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 if is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	if (left == right)
		return (1);
	return (0);
}
