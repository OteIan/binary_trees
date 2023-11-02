#include "binary_trees.h"

/**
 * binary_tree_nodes - Count the nodes in a with atleast 1 child
 * @tree: Pointer to the root node
 *
 * Return: Number of the nodes, if tree is NULL return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		count = 1;

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
