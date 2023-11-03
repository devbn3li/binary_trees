#include "binary_trees.h"
/**
 * binary_trees_ancestor - This finds the lowest common ancestor of two nodes
 * @first: This is a pointer to the first node
 * @second: This is a pointer to the second node
 *
 * Return: If no common ancestor was found, return NULL
 *         Otherwise, return pointer to lowest common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					 const binary_tree_t *second)
{
	binary_tree_t *ancestor;
	
	if (first == NULL || second == NULL)
		return (NULL);
	ancestor = (binary_tree_t *)second;
	while (first != NULL)
		{
		while (second != NULL)
		{
		if (first == second)
			return ((binary_tree_t *)first);
		second = second->parent;
		}
		second = ancestor;
		first = first->parent;
		}
	return (NULL);
	}
