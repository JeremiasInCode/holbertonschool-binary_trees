#include "binary_trees.h"
/**
* binary_tree_insert_right - function that inserts a node as the right-child
* another node
* @parent: pointer to the node to insert the right-child in
* @value: value to store in the new node
* Return: pointer to the created node, or NULL on failure or if parent is NULL
**/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
		binary_tree_t *new_node;

		if (!parent)
		return (NULL);

		new_node = binary_tree_node(parent, value);

		if (parent->right == NULL)
		parent->right = new_node;
		else if (parent->right != NULL)
		{
		new_node->right = parent->right;
		parent->right = new_node;
		new_node->right->parent = new_node;
		}
		return (new_node);
}
