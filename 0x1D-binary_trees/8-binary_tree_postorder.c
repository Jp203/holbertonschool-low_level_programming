#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_postorder - Go through a binary tree using post-order traversal
 * @tree: ptr to root node of tree to traverse
 * @func: ptr to function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree || !func)
        return;
    if (tree->left != NULL)
        binary_tree_postorder(tree->left, func);
    if (tree->right != NULL)
        binary_tree_postorder(tree->right, func);
    func(tree->n);
}
