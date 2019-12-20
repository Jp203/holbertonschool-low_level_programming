#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_depth - measure the depth of a node in a binary tree
 * @tree: ptr to node to measure 
 * Return: depth of tree, 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
    size_t tree_depth = 0;

    while (tree != NULL)
    {
        tree_depth++;
        tree = tree->left;
    }
    return (tree_depth);
}
