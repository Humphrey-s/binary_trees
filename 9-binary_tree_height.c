#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_height - gets tree height from a given position
 * @tree: node of tree
 * Return: returns  height of a binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	binary_tree_t *left = tree->left;
	binary_tree_t *right = tree->right;
	size_t i = 0, a = 0;

	if (tree == NULL)
		return (0);

	while (left != NULL)
	{
		left = left->left;
		i++;
	}

	while (right != NULL)
	{
		right = right->right;
		a++;
	}

	if ((a > i) || (a == i))
	{
		return (a);
	}
	else if ((i > a) || (i == a))
	{
		return (i);
	}
	else
	{
		return (0);
	}
}
