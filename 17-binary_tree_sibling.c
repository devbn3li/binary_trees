#include "binary_trees.h"
/**
 * binary_tree_sibling - This finds the sibling of a node
 * @node: This is a pointer to the node to find the sibling
 *
 * Return: If node is NULL or the parent is NULL, return NULL
 *         If node has no sibling, return NULL
 *         Otherwise, return pointer to sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node != NULL && node->parent != NULL)
	{
		if (node->parent->left == node)
			return (node->parent->right);
		else if (node->parent->right == node)
			return (node->parent->left);
	}
	return (NULL);
}
