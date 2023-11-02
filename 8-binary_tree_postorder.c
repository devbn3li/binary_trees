#include "binary_trees.h"
/**
 * binary_tree_postorder - traverse binary tree using post-order traversal
 * @tree: pointer to root node of tree to traverse
 * @func: pointer to function to call for each node
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);

	binary_tree_inorder(tree->right, func);

	(*func)(tree->n);
}
