#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - creates a binary tree node
 * @parent: ptr to the parent of created node
 * @value: value of new node
 * Return: ptr to created node, NULL if fails
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
        binary_tree_t *create_node;
        
        create_node = malloc(sizeof(binary_tree_t));
        if (create_node == NULL)
            return (NULL);

        create_node->n = value;
        create_node->parent = parent;
        create_node->right = NULL;
        create_node->left = NULL;
        return (create_node);
}
