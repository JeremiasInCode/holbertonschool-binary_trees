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

int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (!node)
        return (0);

    return (node->left == NULL && node->right == NULL);
}