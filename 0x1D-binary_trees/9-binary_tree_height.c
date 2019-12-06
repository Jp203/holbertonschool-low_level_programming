#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: ptr to the root node of the tree to measure the height.
 * Return: height of the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_ht = 0, right_ht = 0;

    if (!tree)
        return (0);
    if (tree->left != NULL)
        left_ht = binary_tree_height(tree->left) + 1;
    if (tree->right != NULL)
        right_ht = binary_tree_height(tree->right) + 1;
    if (left_ht >= right_ht)
        return (left_ht);
    else
        return (right_ht);
}
