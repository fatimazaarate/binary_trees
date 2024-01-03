#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_child;
	
	if (!parent)
		return (NULL);

	new_child = binary_tree_node(parent, value);

	if (parent->left)
	{
		new_child->left = parent->left;
		parent->left->parent = new_child;
	}

	parent->left = new_child;

	return (new_child);
}
