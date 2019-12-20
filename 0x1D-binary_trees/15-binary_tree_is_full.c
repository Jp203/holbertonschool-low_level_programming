#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if binary tree is full
 * @tree: binary tree
 * Return: 1 on success 0 on failure.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    const binary_tree_t *tree_copy = tree;

    if (!tree_copy)
        return (0);

    if (!tree_copy->left && !tree_copy->right)
        return (1);
    if (tree_copy->left && tree_copy->right)
        return (binary_tree_is_full(tree_copy->left) && binary_tree_is_full(tree_copy->right));

    return (0);
}
