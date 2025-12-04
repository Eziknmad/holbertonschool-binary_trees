#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count nodes
 *
 * Description: A node with children has at least one child (left OR right).
 * We count: if current has children, add 1, then count in subtrees.
 *
 * Return: Number of nodes with at least 1 child, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* If tree is NULL, no nodes to count */
	if (tree == NULL)
		return (0);

	/* If this node is a leaf (no children), don't count it */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* This node has at least 1 child, so count it as 1 */
	/* Plus count nodes with children in left and right subtrees */
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
