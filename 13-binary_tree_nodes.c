#include "binary_trees.h"

/**
 * binary_tree_nodes - A function that counts the nodes with
 * at least 1 child in a binary tree.
 * @tree: a pointer to the root node of the tree to count
 * the number of nodes.
 * Return: If tree is NULL, return 0.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL || tree->right != NULL)
			nodes += 1;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
