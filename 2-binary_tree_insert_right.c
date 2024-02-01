#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_insert_right - insert node at the left
 * @parent: parent node
 * @value: value to store in the new node
 * return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	node->n = value;

	if (parent->right == NULL)
	{
		parent->right = node;
		return (node);
	}

	parent->right->parent = node;
	node->right = parent->right;
	parent->right = node;

return (node);
}
