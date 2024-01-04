#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: is a pointer to the node to root node of the tree to check
 * Return: 0 or 1
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if ((tree->left && !binary_tree_is_full(tree->left)) ||
		(tree->right && !binary_tree_is_full(tree->right)))
		return (0);

	if ((!tree->left && tree->right) || (!tree->right && tree->left))
		return (0);


	return (1);
}
