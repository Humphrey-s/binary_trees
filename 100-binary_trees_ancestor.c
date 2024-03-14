#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds LCA node of n1 and n2
 * @n1: node 1
 * @n2: node 2
 * Return: return pointer of LCA
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *ptr = second->parent;

	if (!first || !second)
		return (NULL);

	while (ptr != NULL)
	{
		if (first == ptr)
			return (ptr);

		if (first->parent == ptr)
			return (ptr);

		ptr = ptr->parent;
	}

return (NULL);
}
