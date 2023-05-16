#include "binary_trees.h"

/**
 * binary_tree_is_root - function that check if a given node isa root
 * @node: node
 * Return: 1 or 0
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return (node->parent == NULL);
}
