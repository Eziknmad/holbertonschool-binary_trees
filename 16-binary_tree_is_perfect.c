#include "binary_trees.h"

/**
 * binary_tree_height_perfect - Measures height for perfect check
 * @tree: Pointer to the root node
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height_perfect(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height_perfect(tree->left);
	right_height = binary_tree_height_perfect(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Description: A perfect binary tree has all internal nodes with 2 children
 * and all leaves at the same level. Uses recursion to check if:
 * 1. Tree is full (all nodes have 0 or 2 children)
 * 2. Left and right subtrees have same height
 *
 * Return: 1 if tree is perfect, 0 otherwise
 *         If tree is NULL, return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	/* If tree is NULL, it's not perfect */
	if (tree == NULL)
		return (0);

	/* Calculate heights of left and right subtrees */
	left_height = binary_tree_height_perfect(tree->left);
	right_height = binary_tree_height_perfect(tree->right);

	/* If this is a leaf and both subtrees have height 0, perfect */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If heights are different, not perfect */
	if (left_height != right_height)
		return (0);

	/* If one child is missing, not perfect */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	/* Recursively check if both subtrees are perfect */
	return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
}
