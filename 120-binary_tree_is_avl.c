#include "binary_trees.h"
#include <stdlib.h>
#include <limits.h>
int helper(const binary_tree_t *tree, int min, int max);
/**
 * binary_tree_is_avl - finds if a binary tree is an avl
 * @tree: root node of the tree
 * Return: 1 if tree is avl else 0
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (helper(tree, INT_MIN, INT_MAX));
}

/**
 * helper - finds if a binary tree is an avl
 * @tree: root node of the tree
 * @min: minimum value
 * @max: maximum value
 * Return: 1 if tree is avl else 0
 */
int helper(const binary_tree_t *tree, int min, int max)
{
	int right_path;
	int left_path;

	if (tree == NULL)
		return (1);
	if ((tree->n < min) || (tree->n > max))
		return (0);

	left_path = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_path = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	if (abs(left_path - right_path) > 1)
		return (0);
	return (helper(tree->left, min, tree->n - 1) &&
		helper(tree->right, tree->n + 1, max));
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 * Return: height of the tree else 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightl = 0, heightr = 0;

	if (!tree)
		return (0);

	heightl = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	heightr = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (heightl > heightr ? heightl : heightr);
}
