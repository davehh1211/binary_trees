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

/**
 * binary_tree_height_2 - a function that measures
 * the height of a binary tree
 * @tree:  is a pointer to the root node of the
 * tree to measure the height.
 * Return: the number of height
 */
size_t binary_tree_height_2(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left = 1 + binary_tree_height_2(tree->left);
	right = 1 + binary_tree_height_2(tree->right);
	return ((left > right) ? left : right);
}

/**
 * binary_trees_ancestor - function that finds the
 * lowest common ancestor of two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 * Return: a pointer to the lowest common ancestor
 * node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	int firstnum = 0, secondnum = 0;

	if (!second->parent || !first->parent)
		return (NULL);

	if (first->parent == second->parent)
		return (first->parent);
	else if (first->n == second->parent->n)
		return (second->parent);

	firstnum = binary_tree_depth(first->parent);
	secondnum = binary_tree_depth(second->parent);

	if (firstnum < secondnum)
		second = second->parent;
	else
		first = first->parent;

	return (first->parent);
}
