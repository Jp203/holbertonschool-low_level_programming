#include "binary_trees.h"
#include <stdlib.h>
/**
 *binary_tree_leaves - counts the leaves of a tree
 *@tree: ptr to root of tree to count
 *Return: number of leaves, 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
        size_t total_leaves = 0, l_side = 0, r_side = 0;

        if (!tree)
                return (0);
        if (!tree->left && !tree->right)
                return (1);
             /*   l_side++; */

             /*   r_side++; */
      /*  if (tree->left) */
                l_side += binary_tree_leaves(tree->left);
      /*  if (tree->right) */
                r_side += binary_tree_leaves(tree->right);
        total_leaves = l_side + r_side;
   /* total = l_side;
    total += r_side; */
        return (total_leaves);
}
