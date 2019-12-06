#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: ptr to the root of tree to count the number of nodes
 * Return: number of nodes in the tree, 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t node_count = 0;

    if (!tree)
        return (0);
    if (tree->left != NULL || tree->right != NULL)
        node_count++;
    if (tree->left)
        node_count += binary_tree_nodes(tree->left);
    if (tree->right)
        node_count += binary_tree_nodes(tree->right);
    return (node_count);
}
