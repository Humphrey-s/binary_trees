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
	binary_tree_t *sparent;
	binary_tree_t *fparent;

	if (!first || !second)
		return (NULL);

	sparent = second->parent;
	fparent = first->parent;

	if (first == second)
	{
		if (sparent->right == second)
			return (sparent->right);
		if (sparent->left == second)
			return (sparent->left);
	}

	while (fparent != NULL && sparent != NULL)
	{
		if (fparent == sparent)
			return (fparent);

		fparent = fparent->parent;
		sparent = sparent->parent;
	}

	sparent = second->parent;
        fparent = first->parent;

	while (fparent != NULL && sparent != NULL)
        {
                if (fparent == sparent)
                        return (fparent);

                fparent = fparent->parent;
        }

	sparent = second->parent;
        fparent = first->parent;

	while (fparent != NULL && sparent != NULL)
        {
                if (fparent == sparent)
                        return (fparent);

                sparent = sparent->parent;
        }

return (NULL);
}
