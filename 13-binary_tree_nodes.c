#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
void find_number_notleaf(const binary_tree_t *tree, size_t *i);
/**
 * binary_tree_nodes - counts not leaf nodes in a binary tree
 * @tree: tree
 * Return: number of not leaf nodes in binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t i = 0;

	find_number_notleaf(tree, &i);

return (i);
}
/**
 * find_number_notleaf - counts not leaf in a binary tree
 * @tree: tree
 * @i: integer
 * Return: (Success)
 */
void find_number_notleaf(const binary_tree_t *tree, size_t *i)
{
	const binary_tree_t *node = tree;
	size_t a = *i;

	if (node == NULL)
		return;

	if (node->left == NULL && node->right == NULL)
	{
	}
	else
	{
		a++;
	}

	find_number_notleaf(node->left, &a);
	find_number_notleaf(node->right, &a);
	*i = a;
}
