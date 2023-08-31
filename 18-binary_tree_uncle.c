#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_uncle - func that finds the uncle of a node
 * @node: pointer to the node whose uncle is to be found.
 * Return: returns a pointer to the uncle node
 *         returns NULL if node = NULL
 *         returns NULL if the parent = NULL
 *         returns NULL if the node's unlce = 0
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - func that finds the sibling of a node
 * @node: the pointer to the node whose sibling is to be found
 * Return: returns a pointer to the sibling node
 *         returns NULL if node = NULL
 *         returns NULL if the parent = NULL
 *         returns NULL if the node's sibling = 0
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
