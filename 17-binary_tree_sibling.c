#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 *
 * Description: A sibling is the other child of the same parent.
 * If node is the left child, return the right child of parent.
 * If node is the right child, return the left child of parent.
 *
 * Return: Pointer to the sibling node, or NULL if:
 *         - node is NULL
 *         - parent is NULL (node is root)
 *         - node has no sibling (parent has only 1 child)
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* If node is NULL, no sibling */
	if (node == NULL)
		return (NULL);

	/* If node has no parent (is root), no sibling */
	if (node->parent == NULL)
		return (NULL);

	/* If node is the left child, return the right child (sibling) */
	if (node->parent->left == node)
		return (node->parent->right);

	/* If node is the right child, return the left child (sibling) */
	if (node->parent->right == node)
		return (node->parent->left);

	/* Should never reach here, but return NULL just in case */
	return (NULL);
}
