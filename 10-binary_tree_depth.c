#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures
 * the depth of a node in a binary tree
 *
 * @tree: node to calculate the depth of
 *
 * Return: depth of the node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;
const binary_tree_t *currentNode = tree;
if (tree == NULL)
{
return (0);
}

while (currentNode->parent != NULL)
{
depth++;
currentNode = currentNode->parent;
}

return (depth);
}
