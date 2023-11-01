#include "binary_trees.h"

/**
 * binary_tree_sibling - A function that finds the sibling of a node.
 * @node: a pointer to the node to find the sibling.
 * Return: A pointer to the sibling node. NULL, if node is NULL or
 * the parent is NULL or if node has no sibling.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		sibling = node->parent->right;
	else
		sibling = node->parent->left;

	return (sibling);
}

/**
 * binary_tree_uncle - A function that finds the uncle of a node.
 * @node: a pointer to the node to find the uncle.
 * Return: A pointer to the uncle node. NULL if node is NULL or
 * if node has no uncle.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
