#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_root - checks if a given node is a root 
 * @node: node
 * Return: return 1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if ((node->parent != NULL) || (node == NULL))
		return (0);

return (1);
}
