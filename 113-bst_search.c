#include "binary_trees.h"

/**
 * bst_search - searches for a value in a Binary Search Tree
 * @tree: a pointer to the root node
 * @value: the value to search
 * Return: A pointer to the node containing an int equal to value
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *ptr = (bst_t *)tree;

	if (tree == NULL)
		return (NULL);

	while (ptr)
	{
		if (value == ptr->n)
			return (ptr);

		if (value < ptr->n)
		{
			ptr = ptr->left;
		}
		else if (value > ptr->n)
		{
			ptr = ptr->right;
		}
	}
return (NULL);
}
