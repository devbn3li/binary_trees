#include "binary_trees.h"
/**
 * binary_tree_balance - function that measures the balance factor
 * of a binary tree
 * @tree: pointer to root node of tree to measure the balance factor
 * Return: balance factor of binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    int balance_left = 0, balance_right = 0;

    if (tree == NULL)
        return (0);
    if (tree->left)
        balance_left = binary_tree_height(tree->left) + 1;
    if (tree->right)
        balance_right = binary_tree_height(tree->right) + 1;
    return (balance_left - balance_right);
}
