#include "binary_trees.h"

/**
 * binary_tree_height - Measures the depth of a binary tree node
 *
 * @tree: Pointer to the  node of the tree to measure the depth
 *
 * Return: Depth of the tree, if tree is NULL return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);

	return (depth);
}
