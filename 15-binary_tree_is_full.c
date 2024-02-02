#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: tree
 * Return: if full 1 else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int i = 1;

	check_if_full(tree, &i);

return (i);
}
/**
 * check_if_full - counts leaf in a binary tree
 * @tree: tree
 * @i: integer
 * Return: (Success)
 */
void check_if_full(const binary_tree_t *tree, int *i)
{
	const binary_tree_t *node = tree;
	int a = *i;

	if (node == NULL)
		return;

	if (node->left == NULL && node->right != NULL)
		a = 0;

	if (node->left != NULL && node->right == NULL)
		a = 0;

	check_if_full(node->left, &a);
	check_if_full(node->right, &a);
	*i = a;
}
