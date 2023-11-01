#include "binary_trees.h"

/**
 * binary_tree_height - A function that measures the height of
 * a binary tree.
 * @tree: a pointer to the root node of the tree
 * to measure the height.
 * Return: If tree is NULL, return 0.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hL, hR;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		hL = 1 + binary_tree_height(tree->left);
	else
		hL = 0;
	if (tree->right != NULL)
		hR = 1 + binary_tree_height(tree->right);
	else
		hR = 0;
	if (hR > hL)
		return (hR);
	else
		return (hL);
}
