#include "binary_trees.h"

/**
 * binary_tree_is_leaf -  a function that checks if a node is a leaf
 * @node: node to check, as argument
 *
 * Return: 1 if node is a leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}
