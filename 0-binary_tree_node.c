#include "binary_trees.h"
/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent: pointer to the parent node
 * @value: value to be put in the node
 * Return: the pointer of the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *aux = malloc(sizeof(binary_tree_t));

	if (aux == NULL)
		return (NULL);
	aux->parent = parent;
	aux->n = value;
	aux->left = aux->right = NULL;
	return (aux);
}
