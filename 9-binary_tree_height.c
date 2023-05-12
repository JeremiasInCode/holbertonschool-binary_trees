#include "binary_trees.h"
/**
 * max_height - function that compare two integers
 * @left: first integer
 * @right: second integer
 * Return: maximum integer
 */
size_t max_height(size_t left, size_t right)
{
	return (left > right ? left : right);
}

/**
 * binary_tree_height - function that measure the height of a binary tree
 * @tree: tree
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (tree->left)
		left_h = (1 + binary_tree_height(tree->left));
	if (tree->right)
		right_h = (1 + binary_tree_height(tree->right));

	return (max_height(left_h, right_h));
}
