#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts node as left child
 * @parent: ptr to node left child is inserted in
 * @value: value stored in new node
 * Return: ptr to created node, NULL if fails or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
        binary_tree_t *new_left;

        if (parent == NULL)
                return (NULL);
        new_left = malloc(sizeof(binary_tree_t));
        if (new_left == NULL)
                return (NULL);
        new_left->n = value;
        new_left->parent = parent;
        new_left->right = NULL;

        if (!parent->left)
        {
                new_left->left = new_left;
                new_left->left = NULL;
        }
        else
        {
                new_left->left = parent->left;
                parent->left->parent = new_left;
                parent->left = new_left;
        }
        return (new_left);
}
