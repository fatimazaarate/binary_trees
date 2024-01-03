#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: Pointer to the parent node.
 * @value: Value to be stored in the new node.
 *
 * Return: Pointer to the newly created node,
 * or NULL on failure or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_child;

	if (!parent)
		return (NULL);

	new_child = binary_tree_node(parent, value);

	if (parent->right)
	{
		new_child->right = parent->right;
		parent->right->parent = new_child;
	}

	parent->right = new_child;

	return (new_child);
}
