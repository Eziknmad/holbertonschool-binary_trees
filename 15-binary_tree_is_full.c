#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Description: A full binary tree is one where every node has
 * either 0 children (leaf) or 2 children. No nodes with 1 child.
 *
 * Return: 1 if tree is full, 0 otherwise
 *         If tree is NULL, return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* If tree is NULL, it's not full */
	if (tree == NULL)
		return (0);

	/* If this is a leaf (0 children), it's full */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If this node has 2 children, check if both subtrees are full */
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	/* If we get here, node has only 1 child - NOT FULL */
	return (0);
}
