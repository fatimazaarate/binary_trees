#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 * 
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	/*tree is NULL or it's the root*/
	if (!tree || !tree->parent)
		return (0);

	else
	{
		depth = binary_tree_depth(tree->parent);
		return (1 + depth);
	}
}