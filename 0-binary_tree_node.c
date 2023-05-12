#include "binary_trees.h"
/**
 * binary_tree_node - create a new node
 * @parent: node
 * @value: value to node
 * Return: ptr to node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;
	
	newNode = malloc(sizeof(binary_tree_t));

	if (!newNode)
		return (NULL);

	newNode->parent = NULL;
	if (parent)
	{
		newNode->parent = parent;
	}
	
	newNode->right = NULL;
	newNode->left = NULL;
	newNode->n = value;
	return (newNode);
}
