#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: Pre-order traversal visits nodes in this order:
 * 1. Current node (root)
 * 2. Left subtree
 * 3. Right subtree
 *
 * Return: Nothing (void)
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* If tree or func is NULL, do nothing */
	if (tree == NULL || func == NULL)
		return;

	/* 1. Process current node FIRST (PRE-order) */
	func(tree->n);

	/* 2. Traverse left subtree */
	binary_tree_preorder(tree->left, func);

	/* 3. Traverse right subtree */
	binary_tree_preorder(tree->right, func);
}
