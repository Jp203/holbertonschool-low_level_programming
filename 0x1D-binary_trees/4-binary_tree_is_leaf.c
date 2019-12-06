#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - checks whether a node is a leaf
 * @node: ptr to the node being checked
 * Return: 1 if node is a leaf, 0 if node is NULL otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (!node)
        return (0);
    if (!node->left && !node->right)
        return (1);
    return (0);
}
