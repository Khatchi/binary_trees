#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_nodes - a func that counts the nodes with at
 *                     least 1 child in a binary tree
 * @tree: tree whose node is to be ocunted
 * Return: returns num of nodes
 *         returns 0 if tree = NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

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

/**
 * binary_tree_leaves - a func thats counts the leaves in a binary tree
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
