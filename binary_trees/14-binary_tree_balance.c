#include "binary_trees.h"

int count_tree(const binary_tree_t *tree);
size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - function that measures the balance factor of a binary _tree
 * @tree: a pointer to the root node
 * Return: balance value or 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
            return (0);

    return (binary_tree_height(tree->left) - 
            binary_tree_height(tree->right));
}

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left = 0, right = 0;

    if (tree == NULL || (tree->left == NULL && tree->right == NULL))
            return (0);

    left = binary_tree_height(tree->left) + 1;
    right = binary_tree_height(tree->right) + 1;

    if (left < right)
            return (right);
    else    
            return (left);
    return (0);
}