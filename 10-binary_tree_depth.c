#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: returns depth of node else return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *node = tree;
	size_t i = 0;

	if (tree == NULL)
		return (0);

	while (node != NULL)
	{
		node = node->parent;
		i++;
	}
return (i - 1);
}
