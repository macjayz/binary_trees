#include "binary_trees.h"

/**
 * binary_tree_is_complete - function that checks if a binary tree is complete
 * @tree: a pointer to the root node of the tree
 *
 * Return: 1 if the tree is complete
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);
	size = binary_tree_size(tree);
	return (btic_helper(tree, 0, size));
}

/**
 * btic_helper - function that checks if a binary tree is complete
 * @tree: a pointer to the root node of the tree
 * @index: node index to check as argument
 * @size: number of nodes in the tree as argument
 *
 * Return: 1 if the tree is complete
 */
int btic_helper(const binary_tree_t *tree, size_t index, size_t size)
{
	if (!tree)
		return (1);
	if (index >= size)
		return (0);
	return (btic_helper(tree->left, 2 * index + 1, size) &&
		btic_helper(tree->right, 2 * index + 2, size));
}

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: tree to measure the size
 *
 * Return: size of the tree in int
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) +
		binary_tree_size(tree->right) + 1);
}
