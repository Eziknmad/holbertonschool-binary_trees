#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Description: Height is the number of edges in the longest path from
 * the root to a leaf. A leaf has height 0. NULL has height 0.
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	/* If tree is NULL, height is 0 */
	if (tree == NULL)
		return (0);

	/* If tree is a leaf (no children), height is 0 */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* Recursively calculate height of left subtree */
	left_height = binary_tree_height(tree->left);

	/* Recursively calculate height of right subtree */
	right_height = binary_tree_height(tree->right);

	/* Height = 1 + max(left_height, right_height) */
	if (left_height > right_height)
		return (1 + left_height);
	else
		return (1 + right_height);
}
