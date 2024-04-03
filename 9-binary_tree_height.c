#include "binary_trees.h"
/**
 * binary_tree_height - measure the height of a binary tree
 * @tree:pointer to the root node, to measure height
 *
 * Return: height of the binary tree, if NULL 0
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	return (binary_tree_height(tree->right) + 1);
	return (binary_tree_height(tree->left) + 1);

	if (left_height > right_height)
		return (left_height + 1);

	else
		return (right_height + 1);
}
