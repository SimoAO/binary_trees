#include "binary_trees.h"

/**
 * binary_tree_size - A function that measures the size of
 * a binary tree.
 * @tree: a pointer to the root node of the tree to measure the size.
 * Return: If tree is NULL, the function must return 0.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree != NULL)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}

/**
 * check_if_complete - A function that checks if
 * a binary tree is complete recursively.
 * @tree: a pointer to the root node of the tree.
 * @index: the index of the current node.
 * @size: the size of the binary tree.
 * @flag: a flag indicator.
 * Return: If tree is NULL, return 0.
 */

int check_if_complete(const binary_tree_t *tree, size_t index, size_t size, int flag)
{
	if (tree == NULL)
		return (1);
	if (index > size - 1)
		return (0);
	if (check_if_complete(tree->left, 2 * index + 1, size, flag) == 0)
		return (0);
	if (check_if_complete(tree->right, 2 * (index + 1), size, flag) == 0)
		return (0);
	return (1);
}

/**
 * binary_tree_is_complete - A function that checks if
 * a binary tree is complete.
 * @tree: a pointer to the root node of the tree to check.
 * Return: If tree is NULL, return 0.
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size, index = 0;
	int flag = 0;

	if (tree == NULL)
		return (0);
	size = binary_tree_size(tree);
	return (check_if_complete(tree, index, size, flag));
}
