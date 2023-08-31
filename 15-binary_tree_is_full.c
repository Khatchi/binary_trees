#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_is_full - a func that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to be checked
 * Return: returns 1 if the tree = full
 *         returns 0 if the tree is != full
 *         returns 0 if tree = NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}
