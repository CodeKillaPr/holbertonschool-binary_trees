#include "binary_trees.h"
/**
 * binary_tree_balance - function that measures
 * the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor of the tree, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_balance = 0, right_balance = 0;

	if (tree == NULL)
		return 0;

	if (tree->left)
		left_balance = binary_tree_balance(tree->left) + 1;
	if (tree->right)
		right_balance = binary_tree_balance(tree->right) + 1;

	return (left_balance - right_balance);
}
