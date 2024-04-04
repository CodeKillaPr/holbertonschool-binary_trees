#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that say if tree is perfect
 * @tree: tree to check
 * Return: 1 if its perfect 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	left = binary_tree_is_perfect(tree->left);
	right = binary_tree_is_perfect(tree->right);

	if (left == right)
		return (1);
	return (0);
}
