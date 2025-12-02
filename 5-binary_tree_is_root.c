#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a root, 0 otherwise
 *         If node is NULL, return 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* If node is NULL, it's not a root */
	if (node == NULL)
		return (0);

	/* A root has no parent */
	if (node->parent == NULL)
		return (1);

	/* If it has a parent, it's not a root */
	return (0);
}
