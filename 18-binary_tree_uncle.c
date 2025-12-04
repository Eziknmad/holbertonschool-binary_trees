#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * Description: An uncle is the sibling of the node's parent.
 * To find uncle:
 * 1. Get the parent of the node
 * 2. Get the sibling of the parent (parent's sibling)
 * 3. That's the uncle!
 *
 * Return: Pointer to the uncle node, or NULL if:
 *         - node is NULL
 *         - node has no parent (is root)
 *         - node has no grandparent (parent is root)
 *         - parent has no sibling
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* If node is NULL, no uncle */
	if (node == NULL)
		return (NULL);

	/* If node has no parent (is root), no uncle */
	if (node->parent == NULL)
		return (NULL);

	/*
	 * Uncle = sibling of parent
	 * This automatically handles:
	 * - If parent is NULL (returns NULL)
	 * - If grandparent is NULL (returns NULL)
	 * - If parent has no sibling (returns NULL)
	 */
	return (binary_tree_sibling(node->parent));
}
