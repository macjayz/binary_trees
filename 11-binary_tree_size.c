#include "binary_trees.h"

/**
 * binary_tree_size - function to measures the size of a binary tree
 * @tree: pointer to the size
 *
 * Return: size of the tree in integer
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
