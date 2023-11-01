#include "binary_trees.h"

/**
 * binary_tree_insert_right - A function that inserts a node as
 * the right-child of another node.
 * @parent: a pointer to the node to insert the right-child in.
 * @value: the value to store in the new node.
 * Return: A pointer to the created node, or NULL on failure
 * or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newN;

	if (parent == NULL)
		return (NULL);
	newN = malloc(sizeof(binary_tree_t));
	if (newN == NULL)
		return (NULL);
	newN->n = value;
	newN->parent = parent;
	newN->left = NULL;
	newN->right = parent->right;
	if (parent->right)
		parent->right->parent = newN;
	parent->right = newN;
	return (newN);
}
