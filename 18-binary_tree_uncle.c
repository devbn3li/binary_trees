#include "binary_trees.h"
/**
 * binary_tree_uncle - This finds the uncle of a node
 * @node: This is a pointer to the node to find the uncle
 *
 * Return: If node is NULL or the parent is NULL, return NULL
 *         If node has no uncle, return NULL
 *         Otherwise, return pointer to uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
