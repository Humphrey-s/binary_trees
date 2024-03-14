#include "binary_trees.h"
#include <limits.h>
int bcheck(const binary_tree_t *tree, int min, int max);
/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 * @tree: root node of the tree to check
 * Return: 1 if tree is a valid BST
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

return (bcheck(tree, INT_MIN, INT_MAX));
}
/**
 * bcheck - checks if a binary tree is a valid Binary Search Tree
 * @tree: root node of the tree to check
 * @min: Lower bound of checked nored
 * @max: Upper bound of checked nodes
 * Return: 1 if tree is a valid BST
 */
int bcheck(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (bcheck(tree->left, min, tree->n - 1) &&
		bcheck(tree->right, tree->n + 1, max));
}
