#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if node is a leaf.
 * @node: node
 * Return: 1 is a leaf or 0
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return (node->left == NULL && node->right == NULL);
}
