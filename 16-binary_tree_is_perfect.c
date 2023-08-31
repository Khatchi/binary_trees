#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_is_perfect - a fuc that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to checked
 * Return: returns 1 if the tree = perfect
 *         returns 0 if the tree is != perfect
 *         returns 0 if tree = NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t nodes = 0;
	size_t power = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);

	power = (size_t)_pow_recursion(2, height + 1);
	return (power - 1 == nodes);
}

/**
 *_pow_recursion - a func that returns the value of x raised to the power of y
 *@x: the value to be exponentiated
 *@y: the power of x
 *Return: returns x to the power of y, or
 *        returns -1 if y = negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));

}

/**
 * binary_tree_size - func that measures the size of a binary tree
 * @tree: the tree whose siae is to be measured
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
 * binary_tree_height - func that measures the height of a binary tree
 * @tree: the tree whose height is to be measured
 * Return: returns height of tree
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
