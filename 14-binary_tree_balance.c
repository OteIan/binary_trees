#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Balance factor of the tree, if tree is NULL return 0
 */
size_t binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;
	size_t balance = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		height_left = 1 + binary_tree_balance(tree->left);
	if (tree->right)
		height_right = 1 + binary_tree_balance(tree->right);

	balance = height_left - height_right;

	return (balance);
}