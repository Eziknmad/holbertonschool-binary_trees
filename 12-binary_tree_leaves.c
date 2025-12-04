#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count leaves
 *
 * Description: A leaf is a node with no children (both left and right NULL).
 * We count: leaves in left subtree + leaves in right subtree.
 * If current node is a leaf, count it as 1.
 *
 * Return: Number of leaves, or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* If tree is NULL, no leaves to count */
	if (tree == NULL)
		return (0);

	/* If this node is a leaf (no children), count it as 1 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Otherwise, count leaves in left and right subtrees */
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
