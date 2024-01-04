#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return:  the number of nodes
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_side, right_side;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	right_side = binary_tree_nodes(tree->right);
	left_side = binary_tree_nodes(tree->left);

	return (left_side + right_side + 1);
}
