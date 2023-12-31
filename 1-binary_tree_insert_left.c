#include "binary_trees.h"

/**
 * binary_tree_insert_left - A function that inserts a node as
 * the left-child of another node.
 * @parent: a pointer to the node to insert the left-child in.
 * @value: the value to store in the new node.
 * Return: A pointer to the created node, or NULL on failure or
 * if parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newN;

	if (parent == NULL)
		return (NULL);
	newN = malloc(sizeof(binary_tree_t));
	if (newN == NULL)
		return (NULL);
	newN->n = value;
	newN->parent = parent;
	newN->left = parent->left;
	newN->right = NULL;
	if (parent->left != NULL)
		parent->left->parent = newN;
	parent->left = newN;
	return (newN);
}
