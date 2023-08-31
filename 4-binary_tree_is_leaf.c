#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_is_leaf - a func that checks if a node is a leaf
 * @node: node to be checked
 *
 * Return: 1 if node = leaf
 *         0 if node != leaf
 *         0 if node = NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}
