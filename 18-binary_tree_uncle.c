#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->parent == NULL)
		return (NULL);

	/* If my parent is the left child of grandparent */
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	/* If my parent is the right child of grandparent */
	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);

	return (NULL);
}
