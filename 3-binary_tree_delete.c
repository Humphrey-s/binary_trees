#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: binary tree
 * Return: (Success)
 */
void binary_tree_delete(binary_tree_t *tree)
{
	UNUSED binary_tree_t *node;
	UNUSED binary_tree_t *parent;
	UNUSED binary_tree_t *right;

	if (tree == NULL)
		return;

	if (tree->left == NULL && tree->right == NULL)
	{
		free(tree);
		return;
	}
	else
	{
		node = find_most_left_node(tree);
		parent = node->parent;
		right = node->right;

		free(node);

		if (right != NULL)
		{
			right->parent = parent;
			parent->left = right;
		}
		else
		{
			parent->left = parent->right;
			parent->right = NULL;
		}

		binary_tree_delete(tree);
	}
return;
}
/**
 * find_most_left_node - finds the most left node in binary tree
 * @root: binary_tree
 * Return: Returns the most left node
 */
binary_tree_t *find_most_left_node(binary_tree_t *root)
{
	binary_tree_t *node = root->left;

	while (node->left != NULL)
	{
		node = node->left;
	}

return (node);
}
