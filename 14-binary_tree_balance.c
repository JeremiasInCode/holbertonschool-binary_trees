#include "binary_trees.h"
/**
 * binary_tree_height - height of a binary tree
 * @tree: tree
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t left_h = binary_tree_height(tree->left);
	size_t right_h = binary_tree_height(tree->right);

	return (left_h > right_h ? left_h : right_h);
}
/**
 * binary_tree_balance - balance factor of a binary tree
 * @tree: tree
 * Return: factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_h = binary_tree_height(tree->left);
	int right_h = binary_tree_height(tree->right);

	return (left_h - right_h);
}
