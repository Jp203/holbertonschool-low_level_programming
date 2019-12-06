#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 * @tree: ptr to the root node of the tree to traverse
 * @func: ptr to a function to call for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree || !func)
        return;
    if (tree->left != NULL)
        binary_tree_inorder(tree->left, func);
    func(tree->n);
    if (tree->right != NULL)
        binary_tree_inorder(tree->right, func);
}
