#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_inorder - traverses tree in inorder
 * @tree: tree
 * @func: prints the value in node
 * Return: (Success)
 */
void binary_tree_inorder(const binary_tree_t *tree, UNUSED void (*func)(int))
{
	const binary_tree_t *node = tree;

	if (node == NULL)
		return;

	binary_tree_inorder(node->left, func);
	func(node->n);
	binary_tree_inorder(node->right, func);
}
