#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full.
 * @tree: tree
 * Return: 1 is full or 0 if failed
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left && tree->right)
	{
		if (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right))
		{
			return (1);
		}
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
