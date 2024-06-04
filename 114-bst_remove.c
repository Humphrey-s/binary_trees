#include "binary_trees.h"
#include <stdlib.h>
/**
 * min_val - finds the smallest node
 * @root: root node
 * Return: a pointer to the smallest node
 */
bst_t *min_val(bst_t *root)
{
        bst_t *min = root;

        while (min->left)
                min = min->left;
        return (min);
}

/**
 * bst_remove - deletes a node
 * @root: root node
 * @value: value to be removed
 * Return: a pointer to the new root node
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *ptr = NULL;

	if (root == NULL)
		return (NULL);

	if (value < root->n)
	{
		root->left = bst_remove(root->left, value);
	}
	else if (value > root->n)
	{
		root->right = bst_remove(root->right, value);
	}
	else
	{
		if (!root->left)
		{
			ptr = root->right;
			free(root);
			return (ptr);
		}
		else if (!root->right)
		{
			ptr = root->left;
			free(root);
			return (ptr);
		}
		ptr = min_val(root->right);
		root->n = ptr->n;
		root->right = bst_remove(root->right, ptr->n);
	}
return (root);
}
