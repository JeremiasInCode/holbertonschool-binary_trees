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

void binary_tree_delete(binary_tree_t *tree)
{
    if (!tree)
        return;
        
    if (tree->left)
        binary_tree_delete(tree->left);
    else if (tree->right)
        binary_tree_delete(tree->right);

    free(tree);
    
}