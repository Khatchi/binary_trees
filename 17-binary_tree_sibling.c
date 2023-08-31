#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_sibling - func that finds the sibling of a node
 * @node: a pointer to the node whose sibling is to be found
 * Return: returns pointer to the sibling node
 *         returns NULL if node = NULL
 *         returns NULL if the parent = NULL
 *         returns NULL if the node has no siblings
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
