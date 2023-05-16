#include "binary_trees.h"
/**
 * binary_tree_size - size of binary tree
 * @tree: tree
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sais = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left)
		sais += binary_tree_size(tree->left);
	if (tree->right)
		sais += binary_tree_size(tree->right);
	return (1 + sais);
}
