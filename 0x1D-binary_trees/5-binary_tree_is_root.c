#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_root - checks if a node is a root
 * @node: ptr to node being check
 * Return: 1 if node is a root,0 if node is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
    if (!node)
            return (0);
    if (!node->parent)
            return (1);
    return (0);
}
