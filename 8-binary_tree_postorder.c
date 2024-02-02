#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_postorder - traverses a tree in postorder
 * @tree: tree
 * @func: prints value in node
 * Return: (Success)
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *node = tree;

	if ((node == NULL) || (!func))
		return;

	binary_tree_postorder(node->left, func);
	binary_tree_postorder(node->right, func);
	func(node->n);
}
