#include "binary_trees.h"
/**
 * binary_tree_balance - This measure the balance factor of a binary tree
 * @tree: This is a pointer to the root node of the tree to measure the balance factor
 *
 * Return: If tree is NULL, return 0, else return balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
{
	int left_balance, right_balance;

	if (tree == NULL)
		return (0);

	left_balance = binary_tree_height(tree->left);
	right_balance = binary_tree_height(tree->right);

	return (left_balance - right_balance);
}
}
/**
 * binary_tree_height - This measure height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 *
 * Return: If tree is NULL, your function must return 0, else return height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
