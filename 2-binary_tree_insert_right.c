#include "binary_trees.h"

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 * @value: Value inside the node.
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