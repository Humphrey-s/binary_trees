#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - counts leaf in a binary tree
 * @tree: tree
 * Return: number of leaves in binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t i = 0;

	find_number_bleaves(tree, &i);

return (i);
}
/**
 * find_number_bleaves - counts leaf in a binary tree
 * @tree: tree
 * @i: integer
 * Return: (Success)
 */
void find_number_bleaves(const binary_tree_t *tree, size_t *i)
{
	const binary_tree_t *node = tree;
	size_t a = *i;

	if (node == NULL)
		return;

	if (node->left == NULL && node->right == NULL)
		a++;

	find_number_bleaves(node->left, &a);
	find_number_bleaves(node->right, &a);
	*i = a;
}
