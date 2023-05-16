#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes at least 1 child.
 * @tree: tree
 * Return: count of nodes with this feature.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		counter++;

	counter += binary_tree_nodes(tree->left);
	counter += binary_tree_nodes(tree->right);
	return (counter);
}
