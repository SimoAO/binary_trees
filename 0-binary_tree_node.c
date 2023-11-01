#include "binary_trees.h"

/**
 * binary_tree_node - A function that creates a binary tree node.
 * @parent: a pointer to the parent node of the node to create.
 * @value: the value to put in the new node.
 * Return: A pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newN;

	newN = malloc(sizeof(binary_tree_t));
	if (newN == NULL)
		return (NULL);
	newN->n = value;
	newN->parent = parent;
	newN->left = NULL;
	newN->right = NULL;
	return (newN);
}
