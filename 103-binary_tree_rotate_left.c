#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: a pointer to the root node of the tree to check
 * Return: Pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *ptr = NULL;
	binary_tree_t *parent;

	if (!tree || !tree->right)
		return (NULL);

	ptr = tree;
	parent = tree->parent;
	tree = tree->right;
	tree->parent = NULL;

	if (tree->left)
	{
		ptr->right = tree->left;
		tree->left->parent = ptr;
	}
	else
	{
		ptr->right = NULL;
	}

	ptr->parent = tree;
	tree->left = ptr;

	if (parent)
		parent->right = tree;

	tree->parent = parent;
return (tree);
}
