#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Description: Depth is the number of edges from the root to this node.
 * The root has depth 0. We count upward by following parent pointers.
 *
 * Return: Depth of the node, or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	/* If tree is NULL, depth is 0 */
	if (tree == NULL)
		return (0);

	/* Count edges by following parent pointers up to root */
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
