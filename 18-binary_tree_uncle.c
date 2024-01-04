#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: Node to be measured
 * Return: uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (!node->parent->parent->left || !node->parent->parent->right)
		return (NULL);

	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	else
		return (node->parent->parent->right);
}
