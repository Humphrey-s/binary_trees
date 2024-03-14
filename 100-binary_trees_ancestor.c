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

	if ((first == NULL) || (second == NULL))
		return (NULL);

	if (first == second)
	{
		if (ptr->right == second)
		{
			return (ptr->right);
		}
		else if (ptr->left == second)
		{
			return (ptr->left);
		}
	}

	while (ptr != NULL)
	{
		if (first == ptr)
			return (ptr);

		if (first->parent == ptr)
			return (ptr);

		ptr = ptr->parent;
	}

	ptr = first->parent;

	while (ptr != NULL)
	{
		if (second == ptr)
			return (ptr);

		if (second->parent == ptr)
			return (ptr);

		ptr = ptr->parent;
	}
return (NULL);
}
