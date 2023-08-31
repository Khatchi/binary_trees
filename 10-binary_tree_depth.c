#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_depth - a func that measures the depth of
 *                    a node in a binary tree
 * @tree: node whose depth to be calculated
 *
 * Return: returns depth of the node
 *         returns 0 if tree = NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
