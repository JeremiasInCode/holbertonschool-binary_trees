#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode = NULL;

    newNode = malloc(sizeof(binary_tree_t));
    if (!newNode)
        return (NULL);
    
    ((parent) ? newNode->parent = parent : NULL);
    newNode->right = NULL;
    newNode->left = NULL;
    newNode->n = value;

    return (newNode);
}