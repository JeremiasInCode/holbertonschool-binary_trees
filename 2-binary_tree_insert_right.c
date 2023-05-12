#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that insert node to the right
 * @parent: Pointer to the parent node
 * @value: Value inside the node.
 * Return: new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	if (!parent)
		return (NULL);
	newNode = binary_tree_node(parent, value);
	if (!newNode)
		return (NULL);
	if (parent->right == NULL)
	{
		parent->right = newNode;
	}
	else if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right = newNode;
		newNode->right->parent = newNode;
	}
	return (newNode);
}
