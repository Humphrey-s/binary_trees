#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds LCA node of n1 and n2
 * @f: node 1
 * @s: node 2
 * Return: return pointer of LCA
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *f, const binary_tree_t *s)
{
	binary_tree_t *sparent, *fparent, *ptr;

	if (!f || !s)
		return (NULL);
	sparent = s->parent;
	fparent = f->parent;

	if (f == s)
	{
		if (sparent->right == s)
			return (sparent->right);
		if (sparent->left == s)
			return (sparent->left);
	}
	while (fparent != NULL && sparent != NULL)
	{
		if (fparent == sparent)
			return (fparent);
		ptr = fparent;
		while (ptr != NULL)
		{
			if (ptr == s)
				return (ptr);
			if (ptr == sparent)
				return (sparent);
			ptr = ptr->parent;
		}
		ptr = sparent;
		while (ptr != NULL)
		{
			if (ptr == f)
				return (ptr);
			if (ptr == fparent)
				return (fparent);
			ptr = ptr->parent;
		}
		fparent = fparent->parent;
		sparent = sparent->parent;
	}
return (NULL);
}
