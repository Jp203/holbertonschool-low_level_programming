#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_depth - measure the depth of a node in a binary tree
 * @tree: ptr to node to measure 
 * Return: depth of tree, 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
    if (!node || !node->parent)
        return (0);

    return (binary_tree_depth(node->parent) + 1);
}
