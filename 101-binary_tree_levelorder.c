#include <stdio.h>
#include "binary_trees.h"

void hpostorder(const binary_tree_t *tree, void (*func)(int), size_t level);
/**
 * binary_tree_levelorder - traverse using levelorder
 * @tree: tree
 * @func: function to call for each node
 * Return: (Success)
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t level;
	size_t maxl;

	if (!tree || !func)
		return;

	maxl = binary_tree_height(tree) + 1;

	for (level = 1; level <= maxl; level++)
		hpostorder(tree, func, level);
}
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight = 0;
	size_t rheight = 0;

	if (!tree)
		return (0);

	lheight = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	rheight = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (lheight > rheight ? lheight : rheight);
}
/**
 * hpostorder - goes through a binary tree using post-order traverse
 * @tree: tree to traverse
 * @func: pointer to a function to call for each node
 * @level: the level of the tree to call func upon
 * Return: (success)
 */
void hpostorder(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (level == 1)
		func(tree->n);
	else
	{
		hpostorder(tree->left, func, level - 1);
		hpostorder(tree->right, func, level - 1);
	}
}
