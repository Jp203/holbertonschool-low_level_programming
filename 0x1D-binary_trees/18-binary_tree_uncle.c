#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: binary tree node
 * Return: sibling of the node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (!node || !node->parent)
        return (NULL);
    if (node->n < node->parent->n)
        return (node->parent->right);
    return (node->parent->left);
}
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: the node whose uncle looking for
 * Return: the uncle of the node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (!node || !node->parent)
        return (NULL);
    return (binary_tree_sibling(node->parent));
}
