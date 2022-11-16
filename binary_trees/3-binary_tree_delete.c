#include "binary_trees.h"

/**
 *  binary_tree_delete - function that deletes an entire binary tree
 * @tree: a ponter to the root node of the tree to delete, if tree is NULL. Do nothing.
 *  Return: 0 if successfully
 */

void binary_tree_delete(binary_tree_t *tree)
{
    if (tree)
    {
        binary_tree_delete(tree->left);
        binary_tree_delete(tree->right);
        free(tree);
    }
}