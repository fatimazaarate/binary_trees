#include "binary_trees.h"

/**
 * binary_tree_height -  measures the height of a binary tree
 * @tree: is a pointer to the node to measure the height
 * Return: height
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree  is perfect
 * @tree: is a pointer to the node to root node of the tree to check
 * Return: 0 or 1
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if ((!tree->left) && (!tree->right))
		return (1);

	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
		return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));

	return (0);
}
