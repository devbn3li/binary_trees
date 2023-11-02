#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert node as right-child of another node
 * @parent: pointer to node to insert right-child in
 * @value: value to store in new node
 * Return: pointer to created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL, *tmp = NULL;

	if (!parent)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);
	if (parent->right)
	{
		tmp = parent->right;
		parent->right = new_node;
		new_node->right = tmp;
		tmp->parent = new_node;
	}
	else
		parent->right = new_node;
	return (new_node);
}
