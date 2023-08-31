#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_is_root - a func that checks if a node is a root
 * @node: node to be checked
 *
 * Return: 1 if node = root
 *         0 if node != root
 *         0 if node = NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}
