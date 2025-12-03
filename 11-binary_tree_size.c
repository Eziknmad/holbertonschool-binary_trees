#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Description: Size is the total number of nodes in the tree.
 * We count: current node + all nodes in left subtree + all nodes in right.
 *
 * Return: Size of the tree, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	/* If tree is NULL, size is 0 (no nodes) */
	if (tree == NULL)
		return (0);

	/* Size = 1 (current node) + size(left subtree) + size(right subtree) */
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
