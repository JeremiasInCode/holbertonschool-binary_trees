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

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode = NULL;

    newNode = binary_tree_node(parent, value);
    if (!parent)
        return (NULL);

    if (parent->left == NULL)
    {
        parent->left = newNode;
    }
    else if (parent->left != NULL)
    {
        newNode->left = parent->left;
        parent->left = newNode;
        newNode->left->parent = newNode;
    }
    return (newNode);
}