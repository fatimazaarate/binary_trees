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
 * binary_tree_balance -  measures the balance factor of a binary tree
 * @tree: is a pointer to the node to measure the balance
 * Return: BF
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height, BF;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	BF = left_height - right_height;

	return (BF);
}
