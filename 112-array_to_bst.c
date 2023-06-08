#include "binary_trees.h"

/**
 * array_to_bst - a function that builds a Binary Search Tree from an array
 * @array: pointer as an argument
 * @size: size of elements in the array
 * Return: An int pointer to the root node
 */
bst_t *array_to_bst(int *array, size_t size)
{
	unsigned int i;
	bst_t *root = NULL;

	for (i = 0; i < size; i++)
		bst_insert(&root, array[i]);
	return (root);
}
