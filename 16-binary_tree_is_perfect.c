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
	if (tree->left)
		hL = 1 + binary_tree_height(tree->left);
	else
		hL = 0;
	if (tree->right)
		hR = 1 + binary_tree_height(tree->right);
	else
		hR = 0;
	if (hR > hL)
		return (hR);
	else
		return (hL);
}

/**
 * binary_tree_is_perfect- A function that checks if
 * a binary tree is perfect.
 * @tree: a pointer to the root node of the tree to check.
 * Return: If tree is NULL, return 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);

	if (binary_tree_is_perfect(tree->left) != NULL
			&& binary_tree_is_perfect(tree->right) != NULL)
		return (1);
	return (0);
}
