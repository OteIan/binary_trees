#include "binary_trees.h"

/**
 * binary_tree_leaves - Count the leaves in a binaru tree
 * @tree: Pointer to the root node
 *
 * Return: Number of the leaves, if tree is NULL return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;
	size_t count_left = 0;
	size_t count_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	count_left = binary_tree_leaves(tree->left);
	count_right = binary_tree_leaves(tree->right);

	count = count_left + count_right;

	return (count);
}
