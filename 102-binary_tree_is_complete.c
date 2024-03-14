#include "binary_trees.h"
int bcheck(const binary_tree_t *tree, size_t index, size_t size);
/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if the tree is complete
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);
	size = binary_tree_size(tree);

return (bcheck(tree, 0, size));
}
/**
 * bcheck - checks if a binary tree is complete
 * @tree: a pointer to the root node of the tree to check
 * @index: node index to check
 * @size: number of nodes in the tree
 * Return: 1 if the tree is complete
 */
int bcheck(const binary_tree_t *tree, size_t index, size_t size)
{
	if (!tree)
		return (1);

	if (index >= size)
		return (0);


return (bcheck(tree->left, 2 * index + 1, size) &&
		bcheck(tree->right, 2 * index + 2, size));
}
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: tree to measure the size of
 * Return: size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t i = 0;

	if (!tree)
		return (0);

	i = binary_tree_size(tree->left);
	i += binary_tree_size(tree->right) + 1;

return (i);
}
