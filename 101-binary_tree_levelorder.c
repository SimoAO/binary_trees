#include "binary_trees.h"

/**
 * binary_tree_levelorder - A function that goes through
 * a binary tree using level-order traversal.
 * @tree: a pointer to the root node of the tree to traverse.
 * @func: a pointer to a function to call for each node.
 * Return: If tree or func is NULL, do nothing.
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, level;

	if (tree == NULL || func == NULL)
		return;
	height = binary_tree_height(tree);
	for (level = 1; level < height + 2; level++)
		binary_tree_levelorder_util(tree, func, level);
}

/**
 * binary_tree_level - A function that helps to traverse
 * a specific level.
 * @tree: a pointer to the root node of the tree.
 * @func: a pointer to a function to call for each node.
 * @level: the level to traverse.
 */

void binary_tree_level(const binary_tree_t *tree,
		void (*func)(int), size_t level)
{
	if (tree == NULL)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
		binary_tree_level(tree->left, func, level - 1);
		binary_tree_level(tree->right, func, level - 1);
}

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
