#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_height - a func that measures the height of a binary tree
 * @tree: tree whose height to be measured.
 *
 * Return: returns height of the tree
 *         returns 0 if tree = NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}
