#include "binary_trees.h"
/**
 * binary_trees_ancestor - Finds the lowest common ancestor
 * @f: first node
 * @s: second node
 * Return: pointer to most common ancestor or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    binary_tree_t *second_t;

    if (!first || !second || (!second->parent && !second->parent))
        return (NULL);

    while (first)
    {
        second_t = (binary_tree_t *)second;
        while (second_t1)
        {
            if (second_t->n == first->n)
                return (second_t1);
            second_t1 = second_t1->parent;
        }
        first = first->parent;
    }
    return (NULL);
}
