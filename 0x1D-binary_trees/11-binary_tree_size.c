#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_size - measure the size of a binary tree
 * @tree: ptr to root of tree to measure
 * Return: size of tree, 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t tree_size;

    if (!tree)
        return (0);

    tree_size = binary_tree_size(tree->left) + 1;
    if (tree_size)
        tree_size += binary_tree_size(tree->right);
    return (tree_size);
}
