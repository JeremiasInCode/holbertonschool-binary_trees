#include "binary_trees.h"

size_t
binary_tree_count_nodes(const binary_tree_t *tree)
{
	size_t left_count = 0, right_count = 0;

	if (!tree)
		return (0);

	left_count = binary_tree_count_nodes(tree->left);
	right_count = binary_tree_count_nodes(tree->right);

	return (1 + left_count + right_count);
}

size_t
binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 1, right_h = 1;

	if (tree == NULL)
		return (0);

	left_h += binary_tree_height(tree->left);
	right_h += binary_tree_height(tree->right);

	return (left_h > right_h ? left_h : right_h);
}


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: tree
 * Return: 1 is perfect or 0 not perfect
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0, count_nodes = 0, expected_node_count = 0;

	if (!tree)
		return (0);

	height = binary_tree_height(tree);
	count_nodes = binary_tree_count_nodes(tree);
	expected_node_count = (1 << height) - 1;

	return (count_nodes == expected_node_count);
}
