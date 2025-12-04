#include "binary_trees.h"

/**
 * binary_tree_height_bal - Measures height for balance calculation
 * @tree: Pointer to the root node of the tree
 *
 * Description: This is different from Task 9's height function.
 * For balance, we need to count nodes, not edges.
 * A NULL tree has height -1, a leaf has height 0.
 *
 * Return: Height of the tree, or -1 if tree is NULL
 */
int binary_tree_height_bal(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (-1);

	left_height = binary_tree_height_bal(tree->left);
	right_height = binary_tree_height_bal(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure balance factor
 *
 * Description: Balance factor = height(left subtree) - height(right subtree)
 * Positive value means left-heavy, negative means right-heavy, 0 is balanced.
 *
 * Return: Balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height_bal(tree->left);
	right_height = binary_tree_height_bal(tree->right);

	return (left_height - right_height);
}
