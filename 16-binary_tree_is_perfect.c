#include "binary_trees.h"
/**
 * binary_tree_is_leaf_2 - a function that checks if a node is a leaf
 * @node: is a pointer to the node to check
 * Return: return 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf_2(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}

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
	else if (binary_tree_is_leaf_2(tree))
		return (0);
	left = 1 + binary_tree_height_2(tree->left);
	right = 1 + binary_tree_height_2(tree->right);
	if (left == right)
		return (1);
	return (0);
}

/**
 * binary_tree_is_perfect - a function that checks
 * if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 it it is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int right = 0, left = 0;

	if (!tree)
		return (0);
	else if (!tree->left && !tree->right)
		return (0);

	left = binary_tree_height_2(tree->left);
	right = binary_tree_height_2(tree->right);
	return (left * right);
}
