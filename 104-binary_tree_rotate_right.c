#include "binary_trees.h"
/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: root node
 * Return: new root node of the tree after rotation
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *ptr = NULL, *parent;

	if (!tree || !tree->left)
		return (NULL);

	ptr = tree;
	parent = tree->parent;
	tree = tree->left;
	tree->parent = NULL;

	if (tree->right)
	{
		ptr->left = tree->right;
		tree->right->parent = ptr;
	}
	else
	{
		ptr->left = NULL;
	}

	ptr->parent = tree;
	tree->right = ptr;

	if (parent)
		parent->left = tree;
	tree->parent = parent;

return (tree);
}
