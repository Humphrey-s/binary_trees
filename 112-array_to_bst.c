#include "binary_trees.h"

/**
 * array_to_bst - builds a Binary Search Tree from an array
 * @array: pointer to the first element of array
 * @size: length of array
 * Return: A pointer to the root node
 */
bst_t *array_to_bst(int *array, size_t size)
{
	unsigned int i;
	bst_t *head = NULL;

	for (i = 0; i < size; i++)
		bst_insert(&head, array[i]);

	return (head);
}
