#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_delete - a func that deletes an entire binary tree
 * @tree: this is a pointer to the root node of the tree to delete
 * Description: do nothing if tree is NULL
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
