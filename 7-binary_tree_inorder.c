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

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree || !func)
        return;

    binary_tree_inorder(tree->left, func);
    func(tree->n);
    binary_tree_inorder(tree->right, func);
}