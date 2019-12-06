#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: ptr to the root node of the tree to traverse
 * @func: ptr to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree)
        return;
    if (!func)
        return;
    func(tree->n);
    if (tree->left)
        binary_tree_preorder(tree->left, func);
    if (tree->right)
        binary_tree_preorder(tree->right, func);
}
