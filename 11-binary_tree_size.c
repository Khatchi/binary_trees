#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_size - a func that measures the size of a binary tree
 * @tree: tree whose size is to be measured
 * Return: returns size of the tree
 *         returns 0 if tree = NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
