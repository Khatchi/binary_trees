#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_leaves - a func that counts the leaves in a binary tree
 * @tree: tree whose leaves is to be counted
 * Return: returns num of leaves
 *         returns 0 if tree = NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
