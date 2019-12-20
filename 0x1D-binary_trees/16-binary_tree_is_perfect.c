#include "binary_trees.h"
/**
 * binary_tree_depth - count the parents at given node of binary tree.
 * @tree: binary tree.
 * Return: depth of binary tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t tree_depth = 0;

    while (tree != NULL)
    {
        tree_depth++;
        tree = tree->left;
    }
    return (tree_depth);
}
/**
 * test_perfection - tests perfection of tree
 * @tree: binary tree
 * @depth: depth of tree
 * @level: level of tree
 * Return: 1 on success 0 on failure
 */
int test_perfection(const binary_tree_t *tree, size_t depth, size_t level)
{
    if (!tree->left && !tree->right)
        return (depth == level + 1);
    if (!tree->left || !tree->right)
        return (0);
    return (test_perfection(tree->left, depth, level + 1) &&
        test_perfection(tree->right, depth, level + 1));
}
/**
 * binary_tree_is_perfect - Checks if binary tree is perfect
 * @tree: binary tree
 * Return: 1 on success 0 on failure
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t tree_depth;

    tree_depth = binary_tree_depth(tree);

    if (!tree)
        return (0);

    if (test_perfection(tree, tree_depth, 0))
        return (1);
    return (0);
}
