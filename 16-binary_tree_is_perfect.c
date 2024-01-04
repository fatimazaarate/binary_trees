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
	int left_height, right_height;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height == right_height)
		return (1);

	return (0);
}

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

/**
 * binary_tree_is_perfect - checks if a binary tree  is perfect
 * @tree: is a pointer to the node to root node of the tree to check
 * Return: 0 or 1
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if ((binary_tree_is_full(tree) && binary_tree_balance(tree)))
		return (1);

	return (0);
}
