#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node.
 * @node: node
 * Return: sibling of a node
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->left || !node->parent->right)
		return (NULL);

	return ((node->parent->left == node)
			? (node->parent->right)
			: (node->parent->left));
}
