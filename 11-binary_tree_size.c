#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return: size
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;
	size_t left_size, right_size;

	if (!tree)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	size = left_size + right_size + 1;
	return (size);
}
