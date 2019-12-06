#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert new node as the right-child of another node
 * @parent: ptr to the new node being inserted
 * @value: value stored in new node
 * Return: ptr to created node, NULL if parent is NULL or fails
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_right;

    if (!parent)
        return (NULL);
    new_right = malloc(sizeof(binary_tree_t));
    if (!new_right)
        return (NULL);
    new_right->n = value;
    new_right->parent = parent;
    new_right->left = NULL;
    if (parent->right == NULL)
    {
        parent->right = new_right;
        new_right->right = NULL;
    }
    else
    {
        new_right->right = parent->right;
        parent->right->parent = new_right;
        parent->right = new_right;
    }
    return (new_right);
}
