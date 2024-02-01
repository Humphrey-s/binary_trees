#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
void binary_tree_p(const binary_tree_t *tree);
/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: root of tree
 * @func: pointer to a function to call for each node
 * Return: (Success)
 */
void binary_tree_preorder(const binary_tree_t *tree, UNUSED void (*func)(int))
{
	UNUSED const binary_tree_t *node = tree;

	binary_tree_p(node);
}

void binary_tree_p(const binary_tree_t *tree)
{
	if (tree->left == NULL)
	{
		return;
	}
	else
	{
		printf("%d\n", tree->n);
		binary_tree_p(tree->left);
	}
}
