#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of tree
 * @tree: root node
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lheight, rheight;

	if (!tree)
		return (0);

	lheight = tree->left ? (int)binary_tree_height(tree->left) : -1;
	rheight = tree->right ? (int)binary_tree_height(tree->right) : -1;

return (lheight - rheight);
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
