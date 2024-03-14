#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: root node of the tree
 * Return: tree is perfect return 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t node = 0;
	size_t _pow = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	height = binary_tree_height(tree);
	node = binary_tree_size(tree);

	_pow = (size_t)powr(2, height + 1);

return (_pow - 1 == node);
}

/**
 * _pow_recursion - x raised to the power of y
 * @x: the value to exponentiate
 * @y: the power to raise x to
 * Return: x to the power of y
 */
int powr(int x, int y)
{
	if (y < 0)
		return (-1);
	
	if (y == 0)
		return (1);
	else
		return (x * powr(x, y - 1));

}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: tree
 * Return: size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;

return (size);
}

/**
 * binary_tree_height - measures the height of a binary T
 * @tree: tree to measure the height of
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hleft = 0;
	size_t hright = 0;

	if (tree == NULL)
		return (0);

	hleft = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	hright = tree->right ? 1 + binary_tree_height(tree->right) : 0;

return (hleft > hright ? hleft : hright);
}
