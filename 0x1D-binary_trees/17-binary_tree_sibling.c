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
