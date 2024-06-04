#include "binary_trees.h"

/**
 * bst_insert - inserts a value in a Binary Search Tree
 * @tree: a double pointer to the root node of the BST to insert the value
 * @value: the value to store in the node to be inserted
 * Return: A pointer to the created node
 *         NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *ptr = NULL;
	bst_t *twice = NULL;
	bst_t *added = NULL;

	if (tree == NULL)
		return (NULL);
	if (*tree == NULL)
		return (*tree = binary_tree_node(NULL, value));
	ptr = *tree;

	while (ptr)
	{
		twice = ptr;
		if (value < ptr->n)
			ptr = ptr->left;
		else if (value > ptr->n)
			ptr = ptr->right;
		else if (value == ptr->n)
			return (NULL);
	}
	added = binary_tree_node(NULL, value);

	if (twice == NULL)
	{
		twice = added;
	}
	else if (value < twice->n)
	{
		twice->left = added;
		added->parent = twice;
	}
	else
	{
		twice->right = added;
		added->parent = twice;
	}
	return (added);
}
