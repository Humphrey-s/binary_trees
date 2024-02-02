#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: root of tree
 * @func: pointer to a function to call for each node
 * Return: (Success)
 */
void binary_tree_preorder(const binary_tree_t *tree, UNUSED void (*func)(int))
{
	UNUSED const binary_tree_t *node = tree;

	if ((node == NULL) || (!func))
		return;

	func(node->n);
	binary_tree_preorder(node->left, func);
	binary_tree_preorder(node->right, func);
}
