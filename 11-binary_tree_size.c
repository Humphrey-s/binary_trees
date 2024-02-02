#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of a binary tree else return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t i = 0;
	
	binary_tree_node_count(tree, &i);

return (i);
}
/**
 * binary_tree_node_count - count number of nodes in a tree
 * @tree: tree
 * @i: integer
 * Return: number of nodes
 */
size_t binary_tree_node_count(const binary_tree_t *tree, size_t *i)
{
	const binary_tree_t *node = tree;
	size_t a = *i;

	if (tree == NULL)
		return (a);

	a++;
	binary_tree_node_count(node->left, &a);
	binary_tree_node_count(node->right, &a);
	*i = a;

return (*i);
}
