#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

// ! Library
#include <stdlib.h>
#include <string.h>

// ! Struct 

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */

struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;


// ! Binary Search Tree.
typedef struct binary_tree_s bst_t;

// ! Avl tree.
typedef struct binary_tree_s avl_t;

// ! Max Binary Heap.
typedef struct binary_tree_s heap_t;


/**
* Todo: Prototype of functions.
*/

void binary_tree_print(const binary_tree_t *);

// Todo: Task - 1
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
// Todo: Task - 2
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
// Todo: Task - 3
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
// Todo: Task - 4
void binary_tree_delete(binary_tree_t *tree);
// Todo: Task - 5
int binary_tree_is_leaf(const binary_tree_t *node);
// Todo: Task - 6
int binary_tree_is_root(const binary_tree_t *node);
// Todo: Task - 7
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
// Todo: Task - 8
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
// Todo: Task - 9
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
// Todo: Task - 10
size_t binary_tree_height(const binary_tree_t *tree);
// Todo: Task - 11
size_t binary_tree_depth(const binary_tree_t *tree);
// Todo: Task - 12
size_t binary_tree_size(const binary_tree_t *tree);
// Todo: Task - 13
size_t binary_tree_leaves(const binary_tree_t *tree);
// Todo: Task - 14
size_t binary_tree_nodes(const binary_tree_t *tree);
// Todo: Task - 15
int binary_tree_balance(const binary_tree_t *tree);
// Todo: Task - 16
int binary_tree_is_full(const binary_tree_t *tree);
// Todo: Task - 17
int binary_tree_is_perfect(const binary_tree_t *tree);
// Todo: Task - 18
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
// Todo: Task - 19
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

#endif