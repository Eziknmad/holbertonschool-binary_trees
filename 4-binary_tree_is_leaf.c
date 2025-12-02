#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: Pointer to the node to check
 *
 * Description: A leaf is a node with no children
 * (both left and right are NULL)
 *
 * Return: 1 if node is a leaf, 0 otherwise
 *         If node is NULL, return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* If node is NULL, it's not a leaf */
	if (node == NULL)
		return (0);

	/* A leaf has no left child AND no right child */
	if (node->left == NULL && node->right == NULL)
		return (1);

	/* If it has at least one child, it's not a leaf */
	return (0);
}
