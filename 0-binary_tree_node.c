#include "binary_trees.h"

/**
 * binary_tree_node - a new binary tree node
 *
 * @parent: - accepts a pointer as argument
 * @value: - adding a value to the node
 * Return: returns a pointer to a new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
