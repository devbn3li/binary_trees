#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes with at least 1 child in a
 * binary tree
 * @tree: pointer to root node of tree to count the nodes
 * Return: number of nodes with at least 1 child in tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_left = 0, nodes_right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		nodes_left = 1 + binary_tree_nodes(tree->left);
	if (tree->right)
		nodes_right = 1 + binary_tree_nodes(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return (nodes_left + nodes_right + 1);
}
