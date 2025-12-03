#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through binary tree using post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: Post-order traversal visits nodes in this order:
 * 1. Left subtree
 * 2. Right subtree
 * 3. Current node (root) - LAST
 *
 * Return: Nothing (void)
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* If tree or func is NULL, do nothing */
	if (tree == NULL || func == NULL)
		return;

	/* 1. Traverse left subtree FIRST */
	binary_tree_postorder(tree->left, func);

	/* 2. Traverse right subtree SECOND */
	binary_tree_postorder(tree->right, func);

	/* 3. Process current node LAST (POST-order) */
	func(tree->n);
}
